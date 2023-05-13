#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int array[ROWS][COLS];

    // Initializing the array
    int i, j, count = 1;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            array[i][j] = count;
            count++;
        }
    }
    printf("2D Array:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%2d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}







