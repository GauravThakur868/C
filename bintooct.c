#include <stdio.h>
#include <math.h>
int bTO(long long binary) {
    int octal = 0, decimal = 0, count = 0;
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, count);
        ++count;
        binary /= 10;
    }
    count = 1;
    while (decimal != 0) {
        octal += (decimal % 8)*count;
        decimal /= 8;
        count *= 10;
    }
    return octal;
}
int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);  
    int octal = bTO(binary);
    printf("Octal: %d\n", octal);
    return 0;
}