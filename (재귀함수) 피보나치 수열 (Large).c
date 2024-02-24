#include<stdio.h>
int memo[201]={0,1,1,2,3,5,8,13};
int f(int a)
{
  if(memo[a]) return memo[a];
  return memo[a] = (f(a-1) + f(a-2))%10009;
}
int main() {
    int a, b;
    scanf("%d", &a);
    printf("%d", f(a));
    return 0;
}

