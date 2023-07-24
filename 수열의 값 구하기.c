#include<stdio.h>
int main()
{
    int a,b,c,n,i=1;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    while(i++<n)
    {
      a=a*b+c;
    }
  printf("%d",a);
  return 0;
}
