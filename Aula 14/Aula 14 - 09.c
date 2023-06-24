// 9)Faça um programa que leia 3 vetores reais de dimensão 10 e uma função que gere uma matriz (10 x 3) onde cada coluna é dada por um destes vetores.

#include <stdio.h>

#define LINHAS 10
#define COLUNAS 3

void gerarMatriz(float matriz[][COLUNAS], float vetor1[], float vetor2[], float vetor3[]) {
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        matriz[i][0] = vetor1[i];
        matriz[i][1] = vetor2[i];
        matriz[i][2] = vetor3[i];
    }
}

int main() {
    float vetor1[10], vetor2[10], vetor3[10];
    float matriz[LINHAS][COLUNAS];
    int i, j;

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor2[i]);
    }

    printf("\nDigite os elementos do terceiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor3[i]);
    }

    gerarMatriz(matriz, vetor1, vetor2, vetor3);

    printf("\nMatriz gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
