#include<stdio.h>
#include<string.h>
char sentence[25];
int main()
{
    int i,n;
    scanf("%s",sentence);
    for(i=0;i<strlen(sentence);i++)
    {
      sentence[i]+=2;
      printf("%c",sentence[i]);
      sentence[i]-=2;
    }
    printf("\n");
    for(i=0;i<strlen(sentence);i++)
    {
      sentence[i]=(sentence[i]*7)%80+48;
    }
    printf("%s",sentence);
    return 0;
}