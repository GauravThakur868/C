#include <string.h>

void main() {
    char a[100];
    int i, len;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", &a);

    len = strlen(a);

    for (i = 0; i < len/2; i++) {
        if (a[i] != a[len-i-1]) {
            is_palindrome = 0; 
            break;
        }
    }

    if (is_palindrome) {
        printf("%s is a palindrome.", a);
    } else {
        printf("%s is not a palindrome.", a);
    }
}