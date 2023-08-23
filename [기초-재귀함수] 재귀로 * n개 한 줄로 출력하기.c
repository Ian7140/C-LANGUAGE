#include <stdio.h>

int n;

void f(int n)
{
  if(n <= 0) return;
  f(n-1);
  printf("*");
}

int main()
{
  scanf("%d", &n);
  f(n);
  printf("\n");
}
