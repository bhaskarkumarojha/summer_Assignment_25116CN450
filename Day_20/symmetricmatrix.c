#include <stdio.h>

int main() {
    int n, i, j;
    int symmetric = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric");
    } else {
        printf("The matrix is not symmetric");
    }

    return 0;
}