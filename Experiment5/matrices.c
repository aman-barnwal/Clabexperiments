#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    // Input matrix A dimensions
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    // Input matrix B dimensions
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    // Check compatibility: n must be equal to p
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of A must be equal to number of rows of B.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input matrix A
    printf("\nEnter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of Matrix B (%d x %d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize resultant matrix C with zeros
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix
    printf("\nProduct of Matrix A and B (Matrix C):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
