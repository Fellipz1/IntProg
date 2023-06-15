// 9) Desenvolva um programa que leia um vetor de números reais, um 
// escalar e imprima o resultado da multiplicação do vetor pelo escalar.

#include<stdio.h>

int main()
{
	int escalar;
	int tamanho;
	float multiplicacao;
	
	printf("Digite o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	
	float valor[tamanho];
	
	printf("Digite o seu escalar: \n");
	scanf("%d",&escalar);
	
	int i;
	for(i=0; i<tamanho; i++)
	{	
		printf("Digite o valor do vetor %d: \n",i);
		scanf("%f",&valor[i]);
	}
	for (i=0;i<tamanho; i++)
	{
		multiplicacao=(valor[i]*escalar);
		printf("O valor do seu vetor [%d], multiplicado pelo seu escalar %d, gerou o resultado = %.2f\n", i, escalar, multiplicacao);
	}
	return 0;
}
