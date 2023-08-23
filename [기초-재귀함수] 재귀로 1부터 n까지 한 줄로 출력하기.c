#include <stdio.h>

int n;

void f(int n)
{
  if(n == 0) return;
  f(n-1);
  printf("%d ",n);
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
