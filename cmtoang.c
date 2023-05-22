#include <stdio.h>
int main() {
    double cm, angstrom;
    printf("Enter the length in centimeters: ");
    scanf("%lf", &cm);
    angstrom = cm * 100000000;
    printf("%.2f centimeters = %.2f angstroms\n", cm, angstrom);
    return 0;
}