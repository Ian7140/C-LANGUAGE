#include<stdio.h>
int math_score[2][101];
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&math_score[0][i]);
		math_score[1][i] = 1;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(math_score[0][i] < math_score[0][j])
				math_score[1][i]+=1;
		}
	}
	for(i=0;i<n;i++) printf("%d ",math_score[1][i]);
	return 0;
}
