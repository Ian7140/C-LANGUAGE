#include<stdio.h>
int k[105];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
        k[i+n] = k[i];
    }
    for(i=0;i<n*2;i++)
    {
        printf("%d\n",k[i]);
    }
    return 0;
}