#include<stdio.h>
#include<string.h>
int main()
{
    char love[105];
    int i,n=0;
    gets(love);
    for(i=0;i<strlen(love);i++)
    {
        if(love[i]=='l' && love[i+1]=='o' && love[i+2]=='v' && love[i+3]=='e')
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}