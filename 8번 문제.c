#include <stdio.h>
#include<string.h>
int main() 
{
  char first[101],second[101];
  int f[60]={0},s[60]={0};
  int i,index;
  scanf("%s",first);
  scanf("%s",second);
  for(i=0;i<strlen(first);i++)
  {
    index = first[i];
    f[index-65] += 1;
    index = second[i];
    s[index-65] += 1;
  }
  for(i=0;i<=58;i++)
    {
      if(f[i]!=s[i])
      {
        printf("NO");
        return 0;
      }
    }
  printf("YES");
  return 0;
}
