#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    int i,n,j;
    scanf("%s",sentence);
    for(i=0;i<strlen(sentence);i++)
    {
        if(sentence[i] >= 65 && sentence[i] <= 90)
        {
            sentence[i]+= 32;
        }
        else if(sentence[i]>= 97 && sentence[i] <= 122)
        {
            sentence[i] -= 32;
        }
    }
    printf("%s",sentence);
    return 0;
}