#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str); 
    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reversed string is: %s\n", str);
    return 0;
}