#include<stdio.h>
#include<string.h>
int main()
{
  char number[505];
  int n=0,i;
  scanf("%s",number);
  for(i=0;i<strlen(number);i++)
    {
      n+=number[i]-'0';
    }
  if(n%3==0) printf("1");
  else printf("0");
  return 0;
}