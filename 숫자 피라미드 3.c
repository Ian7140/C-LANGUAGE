#include<stdio.h>
int number[100][100];
int main()
{
  int a,i,j,count,num=1;
  scanf("%d",&a);
  count=a;
  for(i=0;i<a;i++)
    {
      for(j=0;j<count;j++)
        {
          number[i][j] = num++;
        }
      count--;
    }
  
  // 123
  // 45
  // 6
  count=0;
  
  for(i=a-1;i>=0;i--)
    {
      for(j=count;j>=0;j--)
        {
          printf("%d ",number[i][j]);
        }
      count++;
      printf("\n");
    }
  return 0;
}
