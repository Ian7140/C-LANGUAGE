#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=6;i++)
  {
    if(6>=n-i)
    {
      if(n-i>0)
      {
         printf("%d %d\n",i,n-i);
      }
    }
  }
  return 0;
}
