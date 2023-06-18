// 13 - Escreva uma função que receba um vetor de valores reais e seu tamanho e retorne quantos destes valores são negativos.

#include <stdio.h>

void negativos(float vetor[], int tamanho)
{
	int cont=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		if (vetor[i]<0)
		{
			cont++;
		}
	}
	printf("Temos %d, valores negativos",cont);
}

int main ()
{
	int tamanho=1; 
	float vetor[tamanho];
	int i; 
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	negativos(vetor, tamanho);
	
	return 0;
}
