#include<stdio.h>
int main()
{
  int n,i,a;
  scanf("%d",&n);
  a=n/2;
  for(i=1;i<=n;i+=2)
    {
      for(int j=a;j>0;j--) printf(" ");
      for(int k=1;k<=i;k++)
        {
          printf("*");
        }
      printf("\n");
      a--;
    }
  return 0;
}
