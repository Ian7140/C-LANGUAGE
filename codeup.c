#include<stdio.h>
#include<string.h>
int main()
{
    char word[15];
    int i;
    scanf("%s",word);
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]=='t')
        {
            printf("%d ",i+1);
        }
    }
    return 0;
}