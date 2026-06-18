#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    int b[5];

    for(int i = 0; i < n; i++) {
        b[(i + k) % n] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}