//  2) Faça um programa que crie três vetores, preencha dois deles com valores lidos do teclado e, ao
// final, preencha o terceiro vetor armazenando, em cada índice, a soma dos elementos com este
// mesmo índice nos outros vetores.

#include <stdio.h>

void somavetores(float vetor1[], float vetor2[], int tamanho)
{
	float vetor3[tamanho];
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		vetor3[i] = (vetor1[i]+vetor2[i]);
		
		printf("O valor %d do vetor 3 = %.2f\n", i, vetor3[i]);
	}
}

int main ()
{
	int tamanho=1; 
	float vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
	int i; 
	
	printf("Digite o tamanho dos seus vetores: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor 1:\n",i);
		scanf("%f",&vetor1[i]);
	}
	
	printf("---------------------------------------\n");
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor 2:\n",i);
		scanf("%f",&vetor2[i]);
	}
	
	somavetores(vetor1, vetor2, tamanho);
	
	return 0;
}
