#include<stdio.h>
int height[201]={0};
int main(){
  int a,b,c,count=0,i=0;
  scanf("%d %d %d",&a,&b,&c);
  height[a] = height[b] = height[c] = 1;
  for(int i=0;i<201;i++){
    if(height[i]==1) printf("%d ",i);
  }
  return 0;
}
