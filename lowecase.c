#include<stdio.h>
int main(){
	char a[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", &a);

    for(i = 0; a[i] != '\0'; i++) {
        if(a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;
        }
    }
    printf("lowercase: %s\n", a);
    return 0;
}