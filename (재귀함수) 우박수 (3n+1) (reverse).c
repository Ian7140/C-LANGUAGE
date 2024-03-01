#include<stdio.h>
#include<string.h>
void f(int x)
{
    if(x>1)
    {
        if(x%2==0)
        {
            x/=2;
            f(x);
            printf("%d ",x);
        }
        else if(x%2==1)
        {
            x*=3;
            x+=1;
            f(x);
            printf("%d ",x);
        }
        else printf("1");
    }
    
}
int main()
{
    int number=0;
    scanf("%d",&number);
    f(number);
    printf("%d",number);
    return 0;
}


