#include<stdio.h>
int main(){
  int value,max=-1,index;
  for(int i=0;i<9;i++){
    scanf("%d",&value);
    if(max < value){
      max = value;
      index = i+1;
    }
  }
  printf("%d\n%d",max,index);
  return 0;
}
