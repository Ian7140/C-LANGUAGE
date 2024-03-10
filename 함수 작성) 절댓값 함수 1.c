#include <stdio.h>

myabs(int a){
    return abs(a);
}
main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}
