#include<stdio.h>
int number[101][101];
int main()
{
  int n,m,i,j,count=1;
  scanf("%d %d",&n,&m);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        {
          number[i][j]=count++;
        }
    } //값 m*n으로 넣기

  for(i=0;i<n;i++)
    {
      for(j=m-1;j>=0;j--)
        {
          printf("%d ",number[j][i]);
        }
      printf("\n");
    } // 값 n*m으로 출력하기
  
  return 0;
}
