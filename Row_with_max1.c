#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1}
    };

    int rows = 3;
    int cols = 4;

    int maxOnes = 0;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++) {
        int count = 0;

        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }

        if (count > maxOnes) {
            maxOnes = count;
            rowIndex = i + 1;   // 1-based indexing
        }
    }

    if (rowIndex != -1) {
        printf("Row = %d\n", rowIndex);
    } else {
        printf("No 1s found\n");
    }

    return 0;
}