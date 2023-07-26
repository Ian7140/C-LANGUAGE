#include<stdio.h>
int main()
{
  int i,a=0,n,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<a;j++) printf(" ");
      printf("**\n");
      a++;
    }
  return 0;
}
