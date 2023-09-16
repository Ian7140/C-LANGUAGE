#include<stdio.h>
#include<string.h>
int f(int x)
{
    if(x==1 || x==2) return 1;
    else return f(x-1)+f(x-2);
}
int main()
{
    int number=0;
    scanf("%d",&number);
    int s=f(number);
    printf("%d",s);
    return 0;
}

