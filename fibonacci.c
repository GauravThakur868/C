#include <stdio.h>
int main() {
    int number, firstTerm = 0, secondTerm = 1, nextTerm;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Fibonacci series up to %d: ", number);
    while (firstTerm <= number) {
        printf("%d ", firstTerm);
        sum += firstTerm;
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    printf("\nSum of the Fibonacci series: %d\n", sum);
    return 0;
}