#include<stdio.h>
int main()
{
    int a,b,count,i;
    scanf("%d %d",&a,&b);
    count=a;
  if(b==0) 
  {
    printf("1");
    return 0;
  }
  
    for(i=2;i<=b;i++)
    {
        count*=a;
    }
    printf("%d",count);
    return 0;
}
