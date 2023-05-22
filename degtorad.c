#include <stdio.h>
#include <math.h>
double degrees_to_radians(double degrees) {
    double radians = degrees * 3.14159 / 180.0;
    return radians;
}
int main() {
    double degrees, radians;
    printf("Enter degrees: ");
    scanf("%lf", &degrees); 
    radians = degrees_to_radians(degrees);
    printf("Radians: %lf\n", radians);
    return 0;
}