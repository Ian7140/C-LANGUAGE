#include<stdio.h>
int number[101][101];
int main()
{
  int n,m,i,j,count=1;
  scanf("%d %d",&n,&m);

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=m;j++)
        {
          number[i][j]=count++;
        }
    }

  for(i=n;i>0;i--)
    {
      if(i%2==0)
      {
        for(j=m;j>0;j--)
          {
            printf("%d ",number[i][j]);
          }
      }
      else if(i%2==1) //홀수
      {
        for(j=1;j<=m;j++)
          {
            printf("%d ",number[i][j]);
          }
      }
      printf("\n");
    }
  return 0;
}
