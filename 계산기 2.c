#include<stdio.h>
int main()
{
  int result=0,num;
  char math;
  scanf("%d",&result);
  while(1)
    {
      scanf("%c",&math);
      if(math=='=') break;
      scanf("%d",&num);
      if(math=='+') result+=num;
      else if(math=='-') result-=num;
      else if(math=='*') result*=num;
      else if(math=='/') result/=num;
    }
  printf("%d",result);
  return 0;
}
