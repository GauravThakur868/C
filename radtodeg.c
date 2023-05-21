#include <stdio.h>
#include <math.h>
double radiansToDegrees(double radians) {
    return radians * (180.0 / 3.14159);
}
int main() {
    double radians, degrees;
    printf("Enter an angle in radians: ");
    scanf("%lf", &radians);
    degrees = radiansToDegrees(radians);
    printf("%.2f radians is equivalent to %.2f degrees\n", radians, degrees);
    return 0;
}