#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0 && b%2==0) printf("짝수+짝수=짝수");
    else if(a%2==0 && b%2==1) printf("짝수+홀수=홀수");
    else if(a%2==1 && b%2==1) printf("홀수+홀수=짝수");
    else if(a%2==1 && b%2==0) printf("홀수+짝수=홀수");
    return 0;
}