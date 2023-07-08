#include<stdio.h>
int main(){
	char a[100], b[100];
    int i, j = 0;

    printf("Enter first string: ");
    scanf("%s", &a);

    printf("Enter second string: ");
    scanf("%s", &b);

    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if(a[i] != b[i]) {
            j = 1;
            break;
        }
    }

    if(j == 0 && a[i] == '\0' && b[i] == '\0')
        printf("strings are equal\n");
    else
        printf("strings are not equal\n");
    return 0;
}