#include<stdio.h>
int main()
{
  int a,b,sum=0,ck=0;
  scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++)
    {
      ck++;
      if(i%2==1) 
      {
        sum+=i;
        if(ck!=1) printf("+%d",i);
        else if(ck==1)
        {
          printf("%d",i);
        }
      }
      else 
      {
        sum-=i;
        printf("-%d",i);
      }
    }
  printf("=%d",sum);
  return 0;
}
