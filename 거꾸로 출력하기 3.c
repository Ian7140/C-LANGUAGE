#include<stdio.h>
#include<string.h>
int arr[1005];
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
  for(i=n-1;i>=0;i--)
    {
      printf("%d ",arr[i]);
    }
  return 0;
}
