#include<stdio.h>
int main()
{
  int a,b;
  scanf("%06d %d",&a,&b);
  a/=10000;
  if(b==1 || b==2) printf("%d",2012-(1900+a)+1);
  else if(b==3 || b==4) printf("%d",2012-(2000+a)+1);
  return 0;
}