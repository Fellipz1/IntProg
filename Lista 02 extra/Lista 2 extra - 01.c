// 1) Faça um programa que leia um vetor de números reais de 10 posições e imprima o respectivo vetor.

#include <stdio.h>

void soma(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		printf("O valor do vetor %d = %.2f\n",i, vetor[i]);
	}
}

int main ()
{
	int tamanho=10; 
	float vetor[tamanho];
	int i; 
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	soma(vetor, tamanho);
	
	return 0;
}
