#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int list[MAX_SIZE];
    int num_items = 0
    list[num_items++] = 10;
    list[num_items++] = 20;
    list[num_items++] = 30; 
    printf("List contents:\n");
    for (int i = 0; i < num_items; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}