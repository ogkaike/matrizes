#include <stdio.h>

int calcularTraco(int matriz[][100], int n) {
    int traco = 0;

    for (int i = 0; i < n; i++) {
        traco += matriz[i][i];
    }

    return traco;
}

int main() {
    int n;
    printf("Informe a ordem da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int traco = calcularTraco(matriz, n);

    printf("O traço da matriz é: %d\n", traco);

    return 0;
}
