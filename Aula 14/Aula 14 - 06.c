// 6) Implemente uma fun��o que receba por par�metro uma matriz
// quadrada de n�meros reais (dimens�o m�xima 100) e um inteiro N que
// indica quantas linhas/colunas desta matriz ser�o consideradas. Essa
// fun��o dever� calcular e imprimir, separadamente, a soma dos
// elementos da diagonal principal e da diagonal secund�ria desta matriz.
// Fa�a, tamb�m, um programa principal que declare e preencha as
// vari�veis necess�rias para utilizar a fun��o desenvolvida. Note que �
// necess�rio ler o valor N antes da leitura da matriz e preencher apenas
// a quantidade de linhas/colunas que o usu�rio desejar.

#include <stdio.h>

void calculaSomasDiagonais(float matriz[][100], int N) {
    float somaDiagonalPrincipal = 0.0;
    float somaDiagonalSecundaria = 0.0;
    int i, j;

    for (i = 0; i < N; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][N - 1 - i];
    }

    printf("Soma dos elementos da diagonal principal: %.2f\n", somaDiagonalPrincipal);
    printf("Soma dos elementos da diagonal secundaria: %.2f\n", somaDiagonalSecundaria);
}

int main() {
    float matriz[100][100];
    int N, i, j;

    printf("Digite o valor de N (dimensao da matriz): ");
    scanf("%d", &N);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    calculaSomasDiagonais(matriz, N);

    return 0;
}
