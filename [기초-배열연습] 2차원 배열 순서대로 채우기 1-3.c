#include<stdio.h>
 
int number[101][101];
int main()
{
  int n,i,j,count,std=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      count=std;
      for(j=0;j<n;j++)
        {
          printf("%d ",count);
          count+=n;
        }
      printf("\n");
      std++;
    }
  return 0;
}
