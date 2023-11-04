#include<stdio.h>
int student[101];
int main()
{
	int num,i,a,count=0;
	scanf("%d",&num);
	for(i=0;i<num;i++) scanf("%d",&student[i]);
	a = student[num-1];
	for(i=num-2;i>=0;i--)
	{
		if(student[i]>a) 
		{
			count++;
			a = student[i];
		}
	}
	printf("%d",count);
	return 0;
}
