#include<stdio.h>
#include<string.h>
int main()
{
    int first=0,second=0;
    double a=0,b=0,c=0,d=0,e=0,sum=0;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    if(d>e) first=e; //저렴한 음료수 가격
    else first=d;
    if(a>b) // 저렴한 파스타 가격
    {
        second=b;
        if(c>b) second=b;
        else second=c;
    }
    else
    {
        second=a;
        if(c>a) second=a;
        else second=c;
    }
    sum=first+second;
    sum+=(sum/10);
    printf("%.1f",sum);
    return 0;
}

