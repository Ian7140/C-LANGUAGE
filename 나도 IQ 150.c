#include<stdio.h>
int num[25][25];
int main()
{
    int n,count=1,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&num[i][0]);
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<=count;j++)
        {
            num[i][j] = num[i][j-1] - num[i-1][j-1];
        }
        count++;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(num[i][j]!=0)
           {
               printf("%d ",num[i][j]);
           }
        }
        printf("\n");
    }
    return 0;
}
