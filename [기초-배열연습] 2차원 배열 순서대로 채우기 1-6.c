#include<stdio.h>
int number[101][101];
int main()
{
  int n,m,i,j,count=1;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
          number[i][j]=count++;
        }
    }// 배열에 값 넣기

  for(i=n-1;i>=0;i--)
    {
      for(j=0;j<m;j++)
        {
          printf("%d ",number[i][j]);
        }
      printf("\n");
    } //값 출력하기
  return 0;
}
