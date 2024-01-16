#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int n = a; n <= b; n++) {
        if (isPrime(n)) {
            printf("%d : prime\n", n);
        } else {
            printf("%d : not prime\n", n);
        }
    }

    return 0;
}
