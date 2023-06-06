#include <stdio.h>
#define ROWS 3
#define COLS 4
int main() {
    int i,j,array[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("Array Elements:\n");
    for(i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}