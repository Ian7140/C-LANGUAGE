#include<stdio.h>
#include<string.h>
char c[205];
int main()
{
    int i,a=0,b=0;
    scanf("%s",c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='c' || c[i]=='C')
        {
            a++;
            if(c[i+1]=='c' || c[i+1]=='C')
            {
                b++;
            }
        }
    }
    printf("%d\n%d",a,b);
    return 0;
}