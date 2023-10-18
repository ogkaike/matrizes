#include <stdio.h>

int somaDiagonalSecundaria(int matriz[][100], int n) {
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += matriz[i][n - 1 - i];
    }

    return soma;
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

    int soma = somaDiagonalSecundaria(matriz, n);

    printf("A soma dos valores da diagonal secundária é: %d\n", soma);

    return 0;
}
