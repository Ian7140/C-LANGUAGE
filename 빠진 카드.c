#include<stdio.h>
#include<string.h>
int arr[60];
int main()
{
  int n,i,a=0,b=0;
  scanf("%d",&n);
  for(i=0;i<n-1;i++)
    {
      scanf("%d",&arr[i]);
      a+=arr[i];
    }
  for(i=1;i<=n;i++)
    {
      b+=i;
    }
  printf("%d",b-a);
  return 0;
  
}
