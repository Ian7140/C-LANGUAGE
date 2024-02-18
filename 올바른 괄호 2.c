#include<stdio.h>
#include<string.h>
char n[100005];
int main()
{
  int i,ck,a=0;
  scanf("%s",n);
  for(i=0;i<strlen(n);i++)
    {
      if(n[i]=='(') a++;
      else if(n[i]==')') a--;
      
      if(a<0)
      {
          printf("bad");
          return 0;
      }
    }
  if(a>0 || a<0) printf("bad");
  else printf("good");
  return 0;
}
