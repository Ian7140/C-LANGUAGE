#include<stdio.h>
int main(){
  int value , max=-1 ,index1 , index2;
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      scanf("%d",&value);
      if(max < value){
        max = value;
        index1 = i;
        index2 = j;
      }
    }
  }
  printf("%d\n%d %d",max,index1+1,index2+1);
  return 0;
}
