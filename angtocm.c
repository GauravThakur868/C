#include <stdio.h>
int main() {
    double angstrom, cm;
    printf("Enter the length in angstroms: ");
    scanf("%lf", &angstrom);
    cm = angstrom / 100000000;
    printf("%.2f angstroms = %.2f centimeters\n", angstrom, cm);
    return 0;
}