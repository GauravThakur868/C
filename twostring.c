#include <stdio.h>
#include <string.h>
int main() {
    char string1[100], string2[100];
    printf("Enter the first string: ");
    fgets(string1, 100, stdin);
    printf("Enter the second string: ");
    fgets(string2, 100, stdin); 
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0'; 
    strcat(string1, string2);
    printf("The concatenated string is: %s\n", string1);
    return 0;
}