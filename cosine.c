#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    float angle, result;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle);
    float radian = angle * (PI / 180);
    result = cos(radian);
    printf("The cosine of %.2f degrees is %.4f\n", angle, result);
    return 0;
}