#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Cubes of the elements:\n");
    for (i = 0; i < n; i++) {
        int cube = arr[i] * arr[i] * arr[i];
        printf("%d ", cube);
    }
    printf("\n");

    return 0;
}