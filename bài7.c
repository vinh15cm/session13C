#include <stdio.h>
#include <stdlib.h>

// Hàm t?o ma tr?n 2 chi?u
int** createMatrix(int rows, int cols) {
    // C?p phát b? nh? cho ma tr?n 2 chi?u
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Nh?p giá tr? vào ma tr?n
    printf("\nNh?p giá tr? cho ma tr?n (%d hàng x %d c?t):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix;
}

// Hàm in ma tr?n ra màn h?nh
void printMatrix(int** matrix, int rows, int cols) {
    printf("\nMa tr?n (%d hàng x %d c?t):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Hàm gi?i phóng b? nh? c?a ma tr?n
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows, cols;

    // Nh?p s? hàng và s? c?t t? ngý?i dùng
    printf("Nh?p s? hàng: ");
    scanf("%d", &rows);
    printf("Nh?p s? c?t: ");
    scanf("%d", &cols);

    // T?o ma tr?n b?ng hàm createMatrix
    int** matrix = createMatrix(rows, cols);

    // In ma tr?n ra màn h?nh
    printMatrix(matrix, rows, cols);

    // Gi?i phóng b? nh?
    freeMatrix(matrix, rows);

    return 0;
}

