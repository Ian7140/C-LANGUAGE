#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a--;
    if((2012-a)/100 == 19) 
    {
        printf("%d 1",(2012-a)-1900);
    }
    else if((2012-a)/100 == 20) 
    {
        printf("%d 3",(2012-a)-2000);
    }
    return 0;
}