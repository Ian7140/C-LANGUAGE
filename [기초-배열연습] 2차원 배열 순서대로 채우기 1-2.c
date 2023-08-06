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
    } //배열에 값 넣기

  for(i=0;i<n;i++)
    {
      for(j=n-1;j>=0;j--)
        {
          printf("%d ",number[i][j]);
        }
      printf("\n");
    } //반대방향으로 출력하기 (<-)
  return 0;
}
