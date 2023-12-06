#include<stdio.h>
int number[10001];
int main(){
  int start,end,index=10000000,sum=0;
  scanf("%d %d",&start,&end);
  for(int i=1;i<10001;i++){
    for(int j=i;j<10001;j+=i){
      number[j]++;
    }
  }
  for(int i=start;i<=end;i++){
    if(number[i] == 2){
      if(index > i) index = i;
      sum += i;
    }
  }
  printf("%d\n%d",sum,index);
  return 0;
}
