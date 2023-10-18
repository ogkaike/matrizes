#include <stdio.h>
#include <stdbool.h>

bool verificaMatrizDiagonal(int matriz[][100], int m, int n) {
    if (m != n) {
        return false;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m, n;
    printf("Informe o número de linhas (M) da matriz: ");
    scanf("%d", &m);
    printf("Informe o número de colunas (N) da matriz: ");
    scanf("%d", &n);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    bool ehMatrizDiagonal = verificaMatrizDiagonal(matriz, m, n);

    if (ehMatrizDiagonal) {
        printf("A matriz é uma matriz diagonal.\n");
    } else {
        printf("A matriz não é uma matriz diagonal.\n");
    }

    return 0;
}
