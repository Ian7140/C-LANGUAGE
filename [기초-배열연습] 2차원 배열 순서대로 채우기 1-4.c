#include<stdio.h>
int number[101][101];
int main()
{
  int n,i,j,count=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          number[i][j]=count++;
        }
    } //배열에 값넣기

  for(i=n-1;i>=0;i--)
    {
      for(j=0;j<n;j++)
        {
          printf("%d ",number[j][i]);
        }
      printf("\n");
    }
  return 0;
}
