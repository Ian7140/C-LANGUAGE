#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==2 || n==3)
    {
      printf("prime");
      return 0;
    } 
    for(i=2;i<n;i++)
    {
     if(n%i==0)
     {
         printf("not prime");
         return 0;
     }
    }
    printf("prime");
    return 0;
}
