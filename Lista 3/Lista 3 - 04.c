/* 4. Elabore uma estrutura composta por três matrizes quadradas de dimensões iguais a 4 e dois vetores de tamanho igual a 16. 
No programa principal, faça a leitura de uma matriz 4x4 e armazenea na primeira matriz da estrutura. A seguir, desenvolva funções realizar as seguintes tarefas:

a) armazenar na segunda matriz da estrutura, a transposta da matriz lida;

b) armazenar na terceira matriz da estrutura, a matriz lida multiplicada pelo seu elemento de maior valor;

c) armazenar no primeiro vetor da estrutura, de forma sequencial (linha por linha), a matriz lida;

d) armazenar no segundo vetor da estrutura, o resultado do produto da matriz lida por sua transposta.
*/

#include <stdio.h>

typedef struct{
	int matriz1[4][4];
	int matriz2[4][4];
	int matriz3[4][4];
	int vetor1[16];
	int vetor2[16];
} Matrizes;
void transposta(Matrizes matrizes)
{
	int i, j;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matrizes.matriz2[i][j] = matrizes.matriz1[j][i];
		}
	}
		printf("Matriz transposta:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%5d", matrizes.matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void multiplicacao(Matrizes matrizes)
{
	int i, j;
	int maior = 0;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(matrizes.matriz1[i][j] > maior){
				maior = matrizes.matriz1[i][j];
			}
		}
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			matrizes.matriz3[i][j] = maior * matrizes.matriz1[i][j];
		}
	}
	printf("Matriz multiplicada pelo maior valor:\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%5d", matrizes.matriz3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void vetorMatriz(Matrizes matrizes)
{
	int i, j;
	int k = 0;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matrizes.vetor1[k] = matrizes.matriz1[i][j];
			k++;
		}
	}
	printf("Vetor matriz:\n");
	for(i = 0; i < 16; i++)
	{
		printf("%d ", matrizes.vetor1[i]);
	}
	printf("\n");
}
void vetorMult(Matrizes matrizes)
{
	int i, j;
	int k = 0;
	int produto;
	for(i = 0; i < 4; i++)
	{
        for(j = 0; j < 4; j++)
		{
            matrizes.vetor2[k] = matrizes.matriz1[i][j] * matrizes.matriz2[i][j];
        	k++;
		}
        
    }
    printf("Vetor multiplicacao de matrizes:\n");
	for(i = 0; i < 16; i++)
	{
		printf("%d ", matrizes.vetor2[i]);
	}
	printf("\n");
}
int main()
{
	int i, j;
	Matrizes matrizes;	
	printf("Digite os elementos da primeira matriz:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Elemento[%d][%d]: ", i+1, j+1);
			scanf("%d", &matrizes.matriz1[i][j]);
		}
	}
	printf("Matriz principal:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%5d", matrizes.matriz1[i][j]);
		}
		printf("\n");
	}
	
	transposta(matrizes);
	multiplicacao(matrizes);
	vetorMatriz(matrizes);
	vetorMult(matrizes);
		
	return 0;
}
