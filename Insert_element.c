#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;

    int element = 25;
    int pos = 3;   // 1-based position

    // Invalid position check
    if (pos < 1 || pos > n + 1) {
        printf("Invalid Position\n");
        return 0;
    }

    // Right shift elements
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = element;

    n++;

    printf("Array after insertion:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}