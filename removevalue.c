#include <stdio.h>
#include <math.h>

int main() {
    int num = 123456; 
    int index = 3; 
    int power = pow(10, index);
    int digit = (num / power) % 10; 
    num -= digit * power / 10; 
    printf("The number with the digit at index %d removed is: %d\n", index, num); 
    return 0;
}