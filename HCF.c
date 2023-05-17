#include <stdio.h>
int hcf(int a, int b) {
    int min = (a < b) ? a : b;
    int hcf = 1;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = hcf(num1, num2);
    printf("HCF: %d\n", result);
    return 0;
}