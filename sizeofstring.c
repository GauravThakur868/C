#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int size = strlen(str);
    printf("Size of string: %d\n", size);
    return 0;
}