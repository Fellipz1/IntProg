// 7) Implemente as funções abaixo para que o programa funcione corretamente.
/*
#include <stdio.h>
#define MAX 10
int main ()
{
	float a [MAX][MAX], b[MAX][MAX];
	int m, n;
	printf("\nDigite o numero de linhas e de colunas das matrizes: ");
	scanf("%d%d", &m. &n);
	printf("\nForneça os elementos da matriz a: ");
	lematriz(a,m,n); //leitura da matriz a
	printf("\nForneça os elementos da matriz b: ");
	lematriz(b,m,n); //leitura da matriz b
	copiazera(a,b,m,n); //a matriz a "recebe" b e b é zerada.
	printf("\nMatriz a: \n");
	imprimematriz(a,m,n);
	printf("\nMatriz b: \n");
	imprimematriz(b,m,n);
	return 0;
}
*/

#include <stdio.h>
#define MAX 10

void lematriz(float matriz[][MAX], int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void copiazera(float matrizA[][MAX], float matrizB[][MAX], int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            matrizA[i][j] = matrizB[i][j];
            matrizB[i][j] = 0.0;
        }
    }
}

void imprimematriz(float matriz[][MAX], int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    float a[MAX][MAX], b[MAX][MAX];
    int m, n;
    printf("Digite o numero de linhas e colunas das matrizes: ");
    scanf("%d%d", &m, &n);
    printf("\nForneça os elementos da matriz a:\n");
    lematriz(a, m, n); // leitura da matriz a
    printf("\nForneça os elementos da matriz b:\n");
    lematriz(b, m, n); // leitura da matriz b
    copiazera(a, b, m, n); // a matriz a "recebe" b e b é zerada
    printf("\nMatriz a:\n");
    imprimematriz(a, m, n);
    printf("\nMatriz b:\n");
    imprimematriz(b, m, n);
    return 0;
}
