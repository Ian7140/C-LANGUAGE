#include <stdio.h>
int main() 
{
	int a[101];
	int num,temp;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=num-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>0 && a[j+1]<0)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<num;i++) printf("%d ",a[i]);
	return 0;
}
