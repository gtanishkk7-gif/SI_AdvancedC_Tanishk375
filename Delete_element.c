#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    int pos = 3;   // 1-based position

    // Invalid position check
    if (pos < 1 || pos > n) {
        printf("Invalid Position\n");
        return 0;
    }

    // Left shift elements
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}