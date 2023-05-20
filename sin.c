#include <stdio.h>
#include <math.h>
int main() {
    double x, result;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &x);
    x = x * 3.14159 / 180.0;
    result = sin(x);
    printf("The sine of %.2lf is %.4lf\n", x, result);
    return 0;
}