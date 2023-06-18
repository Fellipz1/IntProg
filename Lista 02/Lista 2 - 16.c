// 16 - Elabore uma função que recebe por parâmetro um vetor de inteiros e o seu tamanho e retorna a soma de seus elementos.

#include <stdio.h>

void soma(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		soma+=vetor[i];
	}
	printf("A soma dos elementos = %d",soma);
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
	
	soma(vetor, tamanho);
	
	return 0;
}
