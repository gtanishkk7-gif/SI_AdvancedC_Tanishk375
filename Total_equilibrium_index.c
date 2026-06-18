#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 2, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    long long totalSum = 0;
    long long leftSum = 0;
    int count = 0;

    // Total sum calculate karo
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Equilibrium indices count karo
    for (int i = 0; i < n; i++) {

        totalSum -= arr[i];   // right sum

        if (leftSum == totalSum) {
            count++;
        }

        leftSum += arr[i];
    }

    printf("Total Equilibrium Indices = %d\n", count);

    return 0;
}