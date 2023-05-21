#include <stdio.h>
#include <math.h>
double cosec(double x) {
    return 1.0 / sin(x);
}
int main() {
    double angle, result;
    printf("Enter an angle in radians: ");
    scanf("%lf", &angle);
    result = cosec(angle);    
    printf("Cosec of %.2f radians is %.2f\n", angle, result);
    return 0;
}