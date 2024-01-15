#include<stdio.h>
char song[101];
int main(){
  int num,j=0;
  scanf("%d",&num);
  for(int i=0;i<num;i++){
    scanf("%s",song);
    printf("%s\n",song);
    if(i!=num-1) printf("AMOLED\n");
  }
  return 0;
}
