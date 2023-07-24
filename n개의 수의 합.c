#include<stdio.h>
int main()
{
    int n,i,a,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        count+=a;
    }
    printf("%d",count);
    return 0;
}
