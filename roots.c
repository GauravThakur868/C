#include <stdio.h>
#include <math.h>

int main() {
    double num; 
    printf("Enter a number: "); 
    scanf("%lf", &num); 

    double cubeRoot = cbrt(num); 
    double squareRoot = sqrt(num); 

    printf("The cube root of %.2lf is %.2lf\n", num, cubeRoot);
    printf("The square root of %.2lf is %.2lf\n", num, squareRoot);

    return 0;
}