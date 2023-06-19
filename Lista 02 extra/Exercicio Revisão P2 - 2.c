// 2) Faça um programa que armazene, no vetor v, 10 valores reais lidos do teclado e calcule sua
// média. O programa deve copiar os elementos acima da média para o vetor v1 e os abaixo da média
// para o vetor v2. Ao final, o programa deve imprimir v1 e v2.

/*
#include <stdio.h>

void media(float vetor[], int tamanho)
{
	int soma=0;
	int i, quantidadeMaior, quantidadeMenor;
	float media, v1, v2;
	
	for(i=0; i<tamanho;i++)
	{
		soma+=vetor[i];
	}
	media = (soma/tamanho);
	printf("A media dos elementos = %.2f\n",media);
	
	for(i=0; i<tamanho; i++)
	{
		if (vetor[i]>media)
		{
			v1=vetor[i];
			printf("Os elementos maiores que %.2f = %f\n", media, v1);
			quantidadeMaior++;
		}
	}

	for(i=0; i<tamanho; i++)
	{
		if (vetor[i]<media)
		{
			v2=vetor[i];
			printf("Os elementos menores que %.2f = %f\n", media, v2);
			quantidadeMenor++;
		}
	}
	printf("Quantidade de valores maiores que a media: %d\n", quantidadeMaior);
    printf("Quantidade de valores menores que a media: %d\n", quantidadeMenor);
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
	
	media(vetor, tamanho);
	
	return 0;
}
*/

// 3- Implemente uma função que receba um vetor de inteiros, seu tamanho e um valor x e retorne o
// índice da primeira posição do vetor que contém o valor x. Se o valor x não estiver no vetor, a função
// deve retornar o valor -1.

/*
#include <stdio.h>

void encontrar(int vetor[], int tamanho, int x)
{
	int i;
	int retorno=0;
	
	for(i=0; i<tamanho;i++)
	{
		if (x==vetor[i])
		{
			printf("%d\n", i);
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
*/
