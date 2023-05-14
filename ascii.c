#include <stdio.h>

int main() {
    int a;
    printf("Enter the ASCII value: ");
    scanf("%d", &a);   
    char character = (char)a;
    printf("The character is: %c\n", character);
    
    return 0;
}