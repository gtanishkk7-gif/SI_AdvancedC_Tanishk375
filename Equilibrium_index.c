#include <stdio.h>

int equilibriumIndex(int arr[], int n) {
    long long totalSum = 0;
    long long leftSum = 0;

    // Total sum calculate karo
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Equilibrium index find karo
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];   // Ab totalSum right sum ban gaya

        if (leftSum == totalSum) {
            return i;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main() {
    // Sample input pehle se define hai
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = equilibriumIndex(arr, n);

    if (index != -1) {
        printf("Index = %d\n", index);
    } else {
        printf("No Equilibrium Index\n");
    }

    return 0;
}