#include <stdio.h>
#include <math.h>
double sec(double x) {
    return 1.0 / cos(x);
}
int main() {
    double angle, result;
    printf("Enter an angle in radians: ");
    scanf("%lf", &angle);
    result = sec(angle);
    printf("Secant of %.2f radians is %.2f\n", angle, result);
    return 0;
}