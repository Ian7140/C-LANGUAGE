#include <stdio.h>

int mymax(int a, int b){
  if(a<b) return b;
  else return a;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}
