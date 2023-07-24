#include<stdio.h>
int main()
{
    int n,max=-9999;
    int numbers[1005];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
        if(numbers[i] > max) max=numbers[i];
    }
    printf("%d",max);
    return 0;
}
