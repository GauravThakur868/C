#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b) {
    int gcd_value = gcd(a, b);
    return (a * b) / gcd_value;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = lcm(num1, num2);
    printf("LCM: %d\n", result);
    return 0;
}