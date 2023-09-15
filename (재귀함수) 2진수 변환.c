#include<stdio.h>
#include<string.h>
void f(int x)
{
    if(x==0) printf("0");
    else if(x==1) printf("1");
    else
    {
        f(x/2);
        printf("%d",x%2);
    }
}
int main()
{
    int number=0;
    scanf("%d",&number);
    f(number);
    return 0;
}

