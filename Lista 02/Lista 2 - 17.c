// 17 - Implemente uma função que receba um vetor de inteiros, seu tamanho e um valor x e retorne o índice da primeira posição do vetor que contém o valor x. 
// Se o valor x não estiver no vetor, a função deve retornar o valor -1.

#include <stdio.h>

void encontrar(int vetor[], int tamanho, int x)
{
	int i;
	int retorno=0;
	
	for(i=0; i<tamanho;i++)
	{
		if (x==vetor[i])
		{
			printf("%d", i);
			retorno++;
		}
	}
	if (retorno==0)
		{
			printf("-1");
		}
}

int main ()
{
	int tamanho=1; 
	int vetor[tamanho];
	int i; 
	int x;
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	printf("Digite o valor do vetor que voce quer encontrar: \n");
	scanf("%d",&x);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%d",&vetor[i]);
	}
	
	encontrar(vetor, tamanho, x);
	
	return 0;
}
