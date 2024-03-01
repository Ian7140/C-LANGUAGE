#include<stdio.h>
int main()
{
    int hour=0,minute=0,number=0,i=0,j=0;
    scanf("%d %d",&hour,&minute);
    scanf("%d",&number);
    i=minute+number;
    if(i<= 59)
    {
        printf("%d %d",hour,i);
    }
    else if(i>=60)
    {
        j=i%60;
        i/=60;
        hour+=i;
        minute = j;
        if(hour >= 24) hour-=24;
        printf("%d %d",hour,minute);
    }
    return 0;
}

