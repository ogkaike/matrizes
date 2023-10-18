#include <stdio.h>

void multiplicarMatrizPorVetor(int A[][100], int n, int B[], int C[], int m) {
    for (int i = 0; i < n; i++) {
        C[i] = 0;
        for (int j = 0; j < m; j++) {
            C[i] += A[i][j] * B[j];
        }
    }
}

int main() {
    int n, m;
    printf("Informe o número de linhas (n) da matriz A: ");
    scanf("%d", &n);
    printf("Informe o número de elementos (m) do vetor B: ");
    scanf("%d", &m);

    int A[100][100];
    int B[100];
    int C[100];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    multiplicarMatrizPorVetor(A, n, B, C, m);

    printf("Matriz Resultante (C = A * B):\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", C[i]);
    }

    return 0;
}
