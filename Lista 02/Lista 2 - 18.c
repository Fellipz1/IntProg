// 18 - Implemente uma função que, dados um vetor de valores reais e seu tamanho, retorne a média dos valores armazenados.

#include <stdio.h>

void media(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	float media;
	
	for(i=0; i<tamanho;i++)
	{
		soma+=vetor[i];
	}
	media = (soma/tamanho);
	printf("A media dos elementos = %.2f",media);
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
	
	media(vetor, tamanho);
	
	return 0;
}
