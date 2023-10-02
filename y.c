#include <stdio.h>

int main() {
    char alphabet;
    
    printf("Alphabet\tASCII Value\n");
    
    for(alphabet = 'A'; alphabet <= 'Z'; alphabet++) {
        printf("%c\t\t%d\n", alphabet, alphabet);
    }
    
    for(alphabet = 'a'; alphabet <= 'z'; alphabet++) {
        printf("%c\t\t%d\n", alphabet, alphabet);
    }
    
    return 0;
}