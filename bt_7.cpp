#include <stdio.h>

void intArray(int matrix[4][3], int row, int col);

int main() {
    int col = 3, row = 4;
    int arr[4][3];

    intArray(arr, row, col);

    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void intArray(int matrix[4][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

