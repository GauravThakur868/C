#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Prime Fibonacci Series:\n");

    for (int i = 1; i <= n; i++) {
        if (i <= 2) {
            next = i - 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        if (isPrime(next)) {
            printf("%d ", next);
        }
    }

    printf("\n");

    return 0;
}
