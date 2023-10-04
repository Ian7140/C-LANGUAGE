#include<stdio.h>

void swap(int *px, int *py)
{
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
} //swap() 함수를 포인터를 사용해서 외부 변수의 값 변경하기

int main()
{
    int a =1,b=2;
    printf("swap을 호출하기 전 : a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("swap을 호출한 다음 : a = %d, b = %d",a,b);
    return 0;
}