#include <stdio.h>
#include <stdlib.h>

// H�m t?o ma tr?n 2 chi?u
int** createMatrix(int rows, int cols) {
    // C?p ph�t b? nh? cho ma tr?n 2 chi?u
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Nh?p gi� tr? v�o ma tr?n
    printf("\nNh?p gi� tr? cho ma tr?n (%d h�ng x %d c?t):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Ph?n t? [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    return matrix;
}

// H�m in ma tr?n ra m�n h?nh
void printMatrix(int** matrix, int rows, int cols) {
    printf("\nMa tr?n (%d h�ng x %d c?t):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// H�m gi?i ph�ng b? nh? c?a ma tr?n
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows, cols;

    // Nh?p s? h�ng v� s? c?t t? ng�?i d�ng
    printf("Nh?p s? h�ng: ");
    scanf("%d", &rows);
    printf("Nh?p s? c?t: ");
    scanf("%d", &cols);

    // T?o ma tr?n b?ng h�m createMatrix
    int** matrix = createMatrix(rows, cols);

    // In ma tr?n ra m�n h?nh
    printMatrix(matrix, rows, cols);

    // Gi?i ph�ng b? nh?
    freeMatrix(matrix, rows);

    return 0;
}

