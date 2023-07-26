#include<stdio.h>
int main()
{
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++) printf("*");
  printf("\n");
  for(int j=0;j<n-2;j++)
    {
      for(i=0;i<n;i++)
      {
        if(i==0 || i==n-1) printf("*");
        else printf(" ");
      }
      printf("\n");
    }
  for(i=0;i<n;i++) printf("*");
  return 0;
}
