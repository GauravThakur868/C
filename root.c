#include <stdio.h>
#include <math.h>

int main() {
    double number;
    
    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%lf", &number);
    
    // Calculate and display the square root
    double squareRoot = sqrt(number);
    printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    
    // Calculate and display the cube root
    double cubeRoot = cbrt(number);
    printf("Cube root of %.2lf is %.2lf\n", number, cubeRoot);
    
    return 0;
}




