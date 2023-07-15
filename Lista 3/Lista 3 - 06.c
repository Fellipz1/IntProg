/* 6. Um quadrado m�gico � uma matriz quadrada, de valores inteiros, na qual a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos da diagonal prim�ria e
da diagonal secund�ria s�o iguais. A matriz quadrada de ordem 4 abaixo � um exemplo de quadrado m�gico, no qual todas as somas s�o iguais a 34:
Desenvolva um programa que leia do usu�rio uma matriz quadrada de ordem n e imprima se a matriz � um quadrado m�gico ou n�o.
*/	

#include <stdio.h>

int main()
{
	int n;
	printf("Digite o tamanho da matriz quadrada: ");
	scanf("%d", &n);
	int matriz[100][100];
	int i, j;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Elemento[%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	int somaDiagonalPrimaria = 0;
	int somaDiagonalSecundaria = 0;
	int somaLinha;
	int somaColuna;
	for(i = 0; i < n; i++)
	{
		somaDiagonalPrimaria += matriz[i][i];
		somaDiagonalSecundaria += matriz[i][n - i - 1]; 
	}
	for(i = 0; i < n; i ++)
	{
		somaLinha = 0;
		somaColuna = 0;
		for(j = 0; j < n; j++)
		{
			somaLinha += matriz[i][j];
			somaColuna += matriz[j][i];
		}
		if(somaLinha != somaDiagonalPrimaria || somaColuna != somaDiagonalPrimaria)
		{
			printf("A matriz nao eh um quadrado magico.\n");
			return 0;
		}
	}
	if(somaDiagonalPrimaria != somaDiagonalSecundaria)
	{
		printf("A matriz nao eh um quadrado magico.\n");
	}
	else
	{
		printf("A matriz eh um quadrado magico.\n");
	}
	
	return 0;
}
