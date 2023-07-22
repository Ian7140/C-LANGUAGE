#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int number[5], i;
    for (i = 0; i < 3; i++)
        scanf("%d", &number[i]);

    sort(number, number + 3);

    for (i = 0; i < 3; i++)
        printf("%d ", number[i]);

    return 0;
}
