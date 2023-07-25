#include<stdio.h>
#include<string.h>
int main()
{
  int i,n;
  char sentence[205];
  gets(sentence);
  for(i=0;i<strlen(sentence);i++)
    {
      if(sentence[i]!=' ')
      {
        if(sentence[i]+3 > 122) printf("%c",96+(sentence[i]+3)-122);
        else printf("%c",sentence[i]+3);
      }
      else printf(" ");
    }
  return 0;
}
