/*1. Faça um programa principal que crie duas matrizes quadradas, com 4 linhas e 4 colunas, para armazenar valores reais. A primeira matriz deve ser preenchida com valores informados pelo
usuário. Desenvolva as funções abaixo para armazenar na segunda matriz, o conteúdo solicitado relativo à primeira matriz.

a) transposta (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe a transposta da primeira (linhas e colunas invertidas).

b)diagonal (float mat1[4][4], float mat2[4][4]): a diagonal principal de mat2 recebe a diagonal principal de mat1. Os demais elementos da segunda matriz devem ser nulos.

c) soma (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe a soma da primeira matriz com ela mesma.

d) media (float mat1[4][4], float mat2[4][4]): a média dos valores de cada linha da primeira matriz é adicionada à respectiva linha da segunda matriz na posição da diagonal
principal. Exemplo: a média dos valores da linha 0 de mat1 é adicionada na posição [0][0] de mat2. A média da linha 1 é adicionada na posição [1][1] de mat2 etc..

e) maior_e_menor (float mat1[4][4], float mat2[4][4]): as linhas pares da segunda matriz são preenchidas com o maior elemento da primeira, da matriz ao passo que as linhas
ímpares recebem o menor elemento de mat1.

f) acima_da_media (float mat1[4][4], float mat2[4][4]): mat2 recebe apenas os elementos de mat1 cujo valor está acima da média dos valores da primeira matriz. As
demais posições não preenchidas de mat2, se existirem, devem receber 0.
*/

#include <stdio.h>


void transposta(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz transposta:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matriz2[j][i] = matriz1[i][j];
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void diagonal(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz diagonal:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i == j)
			{
				matriz2[i][j] = matriz1[i][j];
			}
			else
			{
				matriz2[i][j] = 0;
			}
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void soma(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz soma:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matriz2[i][j] = matriz1[i][j] + matriz1[i][j];  
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}	
}
void media(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz media:\n");
	float soma;
    for(i = 0; i < 4; i++)
	{
        soma = 0.0;
        for(j = 0; j < 4; j++)
		{
            soma += matriz1[i][j];
        }
        matriz2[i][i] = soma / 4.0;
    }
    for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i != j){
				matriz2[i][j] = 0;
			}
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void maior_menor(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz com maior e menor valor:\n");
    float maior, menor;
    for(i = 0; i < 4; i++)
	{
        if(i%2 == 0)
		{
            maior = matriz1[i][0];
            for(j = 1; j < 4; j++)
			{
                if(matriz1[i][j] > maior)
				{
                    maior = matriz1[i][j];
				}
            }
            for(j = 0; j < 4; j++)
			{
                matriz2[i][j] = maior;
            }
        } 
		else
		{
        	menor = matriz1[i][0];
            for(j = 1; j < 4; j++)
			{
                if(matriz1[i][j] < menor);
                    menor = matriz1[i][j];
            }
            for(j = 0; j < 4; j++)
			{
            	matriz2[i][j] = menor;
            }
        }
    }	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void acima_media(float matriz1[4][4], float matriz2[4][4])
{
    int i, j;
    float soma = 0.0;
    int cont = 0;

    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            soma += matriz1[i][j];
            cont++;
        }
    }

    float media = soma / cont;

    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            if (matriz1[i][j] > media) 
			{
                matriz2[i][j] = matriz1[i][j];
            } 
			else 
			{
                matriz2[i][j] = 0.0;
            }
        }
    }
   	printf("\nMedia da matriz 1 =%.2f\nMatriz acima da media:\n",media);
    for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	float matriz1[4][4];
	float matriz2[4][4];
	int i, j;
	printf("Preencha a matriz 1:\n");
	for(i = 0; i < 4; i++
	){
		for(j = 0; j < 4; j++)
		{
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz1[i][j]);			
		}
	}
	printf("\nMatriz original:\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz1[i][j]);
		}
		printf("\n");
	}	
	transposta(matriz1, matriz2);
	diagonal(matriz1, matriz2);
	soma(matriz1, matriz2);
	media(matriz1, matriz2);
	maior_menor(matriz1, matriz2);
	acima_media(matriz1, matriz2);
	return 0;
}
