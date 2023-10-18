#include <stdio.h>

void somarMatrizes(int A[][100], int B[][100], int C[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int n, m;
    printf("Informe o número de linhas (n) das matrizes: ");
    scanf("%d", &n);
    printf("Informe o número de colunas (m) das matrizes: ");
    scanf("%d", &m);

    int A[100][100];
    int B[100][100];
    int C[100][100];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    somarMatrizes(A, B, C, n, m);

    printf("Matriz Resultante (C = A + B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
