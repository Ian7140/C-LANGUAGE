#include<stdio.h>
int main()
{
  int i,n=0;
  int number[15];
  for(i=0;i<10;i++) 
    {
      scanf("%d",&number[i]);
      if(number[i]%10==0 || number[i]%10==5) n=number[i];
    }
  printf("%d",n);
  return 0;
}
