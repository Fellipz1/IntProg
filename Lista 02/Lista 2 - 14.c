// 14 - Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne o maior elemento do vetor.

#include <stdio.h>

void maior(float vetor[], int tamanho)
{
	int valor_maior=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		if (valor_maior<vetor[i])
		{
			valor_maior=vetor[i];
		}
	}
	printf("O maior valor digitado foi %d",valor_maior);
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
	
	maior(vetor, tamanho);
	
	return 0;
}
