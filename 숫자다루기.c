#include<stdio.h>
int main(){
  int n, opposite=0,sum=0;
  scanf("%d",&n);
  while(n!=0){
    opposite=opposite*10+n%10;
    sum+=n%10;
    n/=10;
  }
  printf("%d\n%d",opposite,sum);
  return 0;
}
