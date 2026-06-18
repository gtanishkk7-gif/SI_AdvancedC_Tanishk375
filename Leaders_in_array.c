#include <stdio.h>

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    for(int i = 0; i < n; i++) {
        int leader = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                leader = 0;
                break;
            }
        }

        if(leader) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}