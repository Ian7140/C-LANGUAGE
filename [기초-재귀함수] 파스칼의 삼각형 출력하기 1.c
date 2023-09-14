#include <stdio.h>

int pascal[25][25] = {0};

int f(int a, int b) {
    if (b == 1 || a == b)  return 1;
    return pascal[a][b] = f(a - 1, b - 1) + f(a - 1, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", f(a, b));
    return 0;
}
