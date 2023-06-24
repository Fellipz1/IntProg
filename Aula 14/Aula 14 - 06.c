// 6) Implemente uma função que receba por parâmetro uma matriz
// quadrada de números reais (dimensão máxima 100) e um inteiro N que
// indica quantas linhas/colunas desta matriz serão consideradas. Essa
// função deverá calcular e imprimir, separadamente, a soma dos
// elementos da diagonal principal e da diagonal secundária desta matriz.
// Faça, também, um programa principal que declare e preencha as
// variáveis necessárias para utilizar a função desenvolvida. Note que é
// necessário ler o valor N antes da leitura da matriz e preencher apenas
// a quantidade de linhas/colunas que o usuário desejar.

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
