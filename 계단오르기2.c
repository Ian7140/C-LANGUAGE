#include<stdio.h>
int s[1000001];
int main(){
  int stair;
  s[0] = s[1] = 1;
  s[2] = 2;
  scanf("%d",&stair);
  for(int i=3;i<=stair;i++){
    s[i] = (s[i-1] + s[i-2] + s[i-3]) % 1000;
  }
  printf("%d", s[stair]);
  return 0;
}
