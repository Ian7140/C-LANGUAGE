#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=2;;i++){
    if(i*i > n)
    {
      printf("%d %d",n-(i-1)*(i-1),i-1);
      break;
    }
  }
  return 0;
}
