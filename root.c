#include <stdio.h>
#include <math.h>
int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    double squareRoot = sqrt(number);
    printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    double cubeRoot = cbrt(number);
    printf("Cube root of %.2lf is %.2lf\n", number, cubeRoot);
    
    return 0;
}




