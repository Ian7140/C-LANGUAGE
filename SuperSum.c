#include<stdio.h>
#include<string.h>
int SuperSum(int x,int y)
{
    int v=0;
    
    if(x==0) return y;
    
    else if(x!=0)
    {
        for(int i=1;i<=y;i++)
        {
            v+=SuperSum(x-1,i);
        }
        return v;
    }
}

int main()
{
    int a=0,b=0;
    while( scanf("%d %d", &a, &b) != EOF )
        printf("%d\n", SuperSum(a, b));
    return 0;
}


