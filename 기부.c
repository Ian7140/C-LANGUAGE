#include<stdio.h>
int money[100005];
int main()
{
    int a,b,count=1;
    int i;
  for(i=1;i<=100000;i++)
    {
        if(i%2==1)
        {
            money[i]=count++;
        }
        else if(i%2==0)
        {
            money[i]=money[i-1]*10;
        }
    }
    scanf("%d %d",&a,&b);
    printf("%d",money[a]+money[b]);
    return 0;
}
