#include<stdio.h>
#include<algorithm>
#include<stdbool.h>
using namespace std;
bool cmp(int a,int b){
  return a > b;
}
int main()
{
  int number[6];
  for(int i=0;i<5;i++) scanf("%d",&number[i]);
  sort(number,number+5,cmp);
  printf("%d",number[2]);
  return 0;
}
