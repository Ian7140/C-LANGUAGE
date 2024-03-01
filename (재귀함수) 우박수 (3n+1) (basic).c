#include<stdio.h>
#include<string.h>
void f(int x)
{
    if(x>1)
    {
        if(x%2==0)
        {
            x/=2;
            printf("%d ",x);
            f(x);
        }
        else
        {
            x*=3;
            x+=1;
            printf("%d ",x);
            f(x);
        }

    }
    
}
int main()
{
    int number=0;
    scanf("%d",&number);
    printf("%d ",number);
    f(number);
    return 0;
}


