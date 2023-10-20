#include<stdio.h>
#define SIZE 9
int i,k;
int hash(int key)
{
    return key%SIZE;
}
int main()
{
    int key;
    int list[SIZE] = {0,0,10,3,0,5,0,0,0};
    scanf("%d",&key);
    int index = hash(key);
    while(1)
    {
        if(list[index] == 0)
        {
            list[index] = key;
            break;
        }
        else
        {
            k++;
            index = (hash(key)+k)%SIZE;
        }
    }
    printf("%d",index);
    return 0;
}
