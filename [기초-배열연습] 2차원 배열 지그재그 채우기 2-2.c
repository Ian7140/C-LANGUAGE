#include<stdio.h>
int number[101][101];
int main()
{
  int i,j,n,count=1;
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
          number[i][j]=count++;
        }
    }

  
  for(i=1;i<=n;i++)
    {
      if(i%2==0) //짝수일때
      {
        for(j=1;j<=n;j++)
          {
            printf("%d ",number[i][j]);
          }
      }
      else if(i%2==1) //홀수일때
      {
        for(j=n;j>=1;j--)
          {
            printf("%d ",number[i][j]);
          }
      }
      printf("\n");
    }
  return 0;
}
