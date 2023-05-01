#include <stdio.h>

int main() {
    int n, arr[1000], sum = 0, i = 0;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);
    return 0;
}