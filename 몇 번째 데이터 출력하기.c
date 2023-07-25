#include<stdio.h>
int numbers[1000000];
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&numbers[i]);
    }
  printf("%d %d %d",numbers[0],numbers[n/2],numbers[n-1]);
}
