#include<stdio.h>
int main()
{
	int n,volume,i,noise,count=0,max_noise=-1;
	scanf("%d %d",&n,&volume);
	for(i=0;i<n;i++)
	{
		scanf("%d",&noise);
		if(noise > volume)
		{
			count++;
			if(count > max_noise) max_noise = count;
		}
		else count = 0;
	}
	printf("%d",max_noise);
	return 0;
}
