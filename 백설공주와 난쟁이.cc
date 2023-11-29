#include<stdio.h>
#include<algorithm>
#include<stdbool.h>
#define SIZE 8
using namespace std;
bool cmp(int a,int b){
  return a > b;
}
int main()
{
  int height[SIZE];
  for(int i=0;i<7;i++) scanf("%d",&height[i]);
  sort(height,height+7,cmp);
  printf("%d\n%d",height[0],height[1]);
  return 0;
}
