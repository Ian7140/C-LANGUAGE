#include<stdio.h>
int main()
{
    char a,b;
    scanf(" %c %c",&a,&b);
    for(int i=0;;i++)
    {
        printf("%c ",a+i);
        if(a+i==b) break;
    }
    return 0;
}