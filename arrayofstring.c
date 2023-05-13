#include<stdio.h>
void main(){
    char names[3][10] = {"Abc", "Xyz", "Ijk"};
    for (int i = 0; i < 3; i++) {
        printf("Name %d: %s\n", i+1, names[i]);
    }
}