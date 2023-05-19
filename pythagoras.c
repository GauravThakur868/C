#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Enter the length of side A: ");
    scanf("%f", &a);
    printf("Enter the length of side B: ");
    scanf("%f", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("The length of the hypotenuse (side C) is %.2f\n", c);
    return 0;
}