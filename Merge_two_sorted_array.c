#include <stdio.h>

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int n = 3, m = 3;
    int c[6];

    int i, j, k;

    // Copy first array
    for(i = 0; i < n; i++) {
        c[i] = a[i];
    }

    // Copy second array
    for(j = 0; j < m; j++) {
        c[n + j] = b[j];
    }

    // Sort merged array
    for(i = 0; i < n + m - 1; i++) {
        for(j = 0; j < n + m - 1 - i; j++) {
            if(c[j] > c[j + 1]) {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    printf("Merged Array: ");

    for(k = 0; k < n + m; k++) {
        printf("%d ", c[k]);
    }

    return 0;
}