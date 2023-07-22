# include <stdio.h>
# include <string.h>
int main()
{
	char arr1[101]={0,},arr2[101]={0,};
	int len1,len2,i;
	scanf("%s %s",arr1,arr2);
	len1 = strlen(arr1);
	len2 = strlen(arr2);
	
	
	if(len1>len2)
		printf("%s %s",arr2,arr1);
	else if(len2 > len1)
		printf("%s %s",arr1,arr2);
	else
	{
		for(i = 0; i<len1; i++)
		{
			if(arr1[i] > arr2[i])
			{
				printf("%s %s",arr2,arr1);
				return 0;
			}
			else if(arr2[i] > arr1[i])
			{
				printf("%s %s",arr1,arr2);
				return 0;
			}
		}
	}
	
	return 0;
}