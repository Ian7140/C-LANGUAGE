#include<stdio.h>
int main()
{
  int number,sum=0;
  for(int i=0;i<7;i++){
    scanf("%d",&number);
    if(number%2!=0) sum+=number;
  }
  if(!sum) printf("-1");
  else printf("%d",sum);
  return 0;
}
