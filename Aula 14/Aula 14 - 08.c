// 8) Faça uma função para manipulação de matrizes quadradas NxN com o seguinte “Menu”:
// Escolha uma opção de cálculo para matrizes:
// 1) Soma
// 2) Diferença
// 3) Transposta
// 4) Produto
// 5) Sair
// Opção:__
// Na opção (3) o usuário só precisa fornecer uma matriz, nas opções (1), (2) e (4) o usuário deve
// fornecer duas matrizes. O resultado deve apenas ser impresso.

#include <stdio.h>

void somaMatrizes(int matrizA[][100], int matrizB[][100], int N) {
    int matrizResultado[100][100];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Resultado da soma das matrizes:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }
}

void diferencaMatrizes(int matrizA[][100], int matrizB[][100], int N) {
    int matrizResultado[100][100];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    printf("Resultado da diferenca das matrizes:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }
}

void transpostaMatriz(int matriz[][100], int N) {
    int matrizTransposta[100][100];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz transposta:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrizTransposta[i][j]);
        }
        printf("\n");
    }
}

void produtoMatrizes(int matrizA[][100], int matrizB[][100], int N) 
{
    int matrizResultado[100][100];
    int i, j, k;

    for (i = 0; i < N; i++) 
	{ 
        for (j = 0; j < N; j++) 
		{
            matrizResultado[i][j] = 0;
            for (k = 0; k < N; k++) 
			{
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Resultado do produto das matrizes:\n");
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
		{
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }
}

void manipulaMatrizes() 
{
    int matrizA[100][100], matrizB[100][100];
    int N, opcao, i, j;

    printf("Digite o valor de N (dimensao das matrizes): ");
    scanf("%d", &N);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < N; i++) 
	{
        for (j = 0; j < N; j++) 
		{
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < N; i++) 
	{
        for (j = 0; j < N; j++) 
		{
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    do 
	{
        printf("\nEscolha uma opcao de calculo para matrizes:\n");
        printf("1) Soma\n");
        printf("2) Diferenca\n");
        printf("3) Transposta\n");
        printf("4) Produto\n");
        printf("5) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) 
		{
            case 1:
                somaMatrizes(matrizA, matrizB, N);
                break;
            case 2:
                diferencaMatrizes(matrizA, matrizB, N);
                break;
            case 3:
                printf("\nMatriz A:\n");
                transpostaMatriz(matrizA, N);
                printf("\nMatriz B:\n");
                transpostaMatriz(matrizB, N);
                break;
            case 4:
                produtoMatrizes(matrizA, matrizB, N);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);
}

int main() 
{
    manipulaMatrizes();
    return 0;
}
