#include <stdio.h>

void calcularTransposta(int matriz[][100], int m, int n, int transposta[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
}

int main() {
    int m, n;
    printf("Informe o número de linhas (M) da matriz: ");
    scanf("%d", &m);
    printf("Informe o número de colunas (N) da matriz: ");
    scanf("%d", &n);

    int matriz[100][100];
    int transposta[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    calcularTransposta(matriz, m, n, transposta);

    printf("Matriz Transposta:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
