#include<stdio.h>
int main()
{
  int i,min=999999999,max=-999999999,a;
  for(i=0;i<5;i++)
    {
      scanf("%d",&a);
      if(a > max) max = a;
      if(a < min) min = a;
    }
  printf("%d\n%d",max,min);
  return 0;
}
