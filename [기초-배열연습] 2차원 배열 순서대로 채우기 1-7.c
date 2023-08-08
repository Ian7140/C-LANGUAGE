#include<stdio.h>
int number[101][101];
int main()
{
  int n,m,i,j,count,std;
  scanf("%d %d",&n,&m);
  std=n*m;
  for(i=0;i<n;i++)
    {
      count=std--;
      for(j=0;j<m;j++)
        {
          printf("%d ",count);
          count-=n;
        }
      printf("\n");
    }
  return 0;
}
