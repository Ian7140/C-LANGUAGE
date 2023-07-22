#include<stdio.h>
#include<string.h>
int main()
{
    char a[25],b[25],c[25];
    int first,second,third;
    scanf("%s %s %s",a,b,c);
    first=strlen(a);
    second=strlen(b);
    third=strlen(c);
    if(a[first-1]==b[0] && b[second-1]==c[0] && c[third-1]== a[0]) printf("good");
    else printf("bad");
    return 0;
}