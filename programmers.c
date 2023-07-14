#include<stdio.h>
int main()
{
    char number[105];
    gets(number);
    for(int i=0;i<strlen(number);i++)
    {
        if(number[i]!=' ')
        {
            printf("%c",number[i]);
        }
    }
    return 0;
}