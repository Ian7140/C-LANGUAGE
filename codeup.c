#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char ioi[15];
    scanf("%s",ioi);
    for(i=0;i<strlen(ioi);i++)
    {
        if(ioi[i]=='I' && ioi[i+1]=='O' && ioi[i+2]=='I' && strlen(ioi)==3)
        {
            printf("IOI is the International Olympiad in Informatics.");
            break;
        }
        else
        {
            printf("I don't care.");
            break;
        }
    }
    return 0;
}