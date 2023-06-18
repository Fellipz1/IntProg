// 17 - Implemente uma fun��o que receba um vetor de inteiros, seu tamanho e um valor x e retorne o �ndice da primeira posi��o do vetor que cont�m o valor x. 
// Se o valor x n�o estiver no vetor, a fun��o deve retornar o valor -1.

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
