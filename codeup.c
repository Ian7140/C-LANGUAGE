#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0)
    {
        for(int i=a+1;i<=b;i+=2)
        {
            printf("%d ",i);
        }
    }
    else if(a%2==1)
    {
        for(int i=a;i<=b;i+=2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}