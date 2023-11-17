#include<stdio.h>
#include<string.h>
#define MAX_SIZE 101

char compare[10];
int main()
{
	char number[MAX_SIZE];
	int i,max=-1,index;
	scanf("%s",&number);
	for(i=0;number[i]!='\0';i++)
	{
		compare[number[i] - '0'] ++;
	}
	for(i=0;i<10;i++)
	{
		if(compare[i]>=max)
		{
			max = compare[i];
			index = i;
		}
	}
	printf("%d",index);
	return 0;
}
