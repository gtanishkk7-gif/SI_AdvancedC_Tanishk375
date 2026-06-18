#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;
    int target = 5;

    int i = 0;
    int j = cols - 1;

    while (i < rows && j >= 0) {

        if (matrix[i][j] == target) {
            printf("Found at (%d,%d)\n", i + 1, j + 1);
            return 0;
        }
        else if (matrix[i][j] > target) {
            j--;
        }
        else {
            i++;
        }
    }

    printf("Element not found\n");

    return 0;
}