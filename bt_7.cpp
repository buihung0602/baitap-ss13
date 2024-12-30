#include <stdio.h>

void intArray(int matrix[100][100], int row, int col);

int main() {
    int row, col;

    printf("nhap vao so hang: ");
    scanf("%d", &row);
    printf("nhap vao so cot: ");
    scanf("%d", &col);

    int arr[100][100];

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

void intArray(int matrix[100][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

