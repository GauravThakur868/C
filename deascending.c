#include <stdio.h>
void sortDescending(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}
int main() {
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the list of numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sortDescending(arr, size);
    printf("List in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}