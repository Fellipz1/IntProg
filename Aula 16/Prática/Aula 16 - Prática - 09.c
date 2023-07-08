// 9) Faça um programa que armazene informações de restaurantes. Cada restaurante é identificado pelo nome, o tipo de comida (brasileira, chinesa, francesa, 
// italiana, japonesa, etc.) e uma nota para a cozinha  (entre 0 e 5). 
// -> O programa deverá ler todas as informações e imprimir  a lista de todos os restaurantes e, ao final, o tipo de cozinha do restaurante com maior nota.

#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome_restaurante[100];
	char tipo_comida[50];
	int avaliacao;
} restaurante;

int main()
{
	int tamanho;
	int i;
	printf("Digite quantos restaurantes serao avaliados: ");
	scanf("%d", &tamanho);
	restaurante qualificacao[tamanho];
	fflush(stdin);
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite o nome do restaurante %d: ", i+1);
		fgets(qualificacao[i].nome_restaurante, 100, stdin);
		printf("Digite o tipo de comida do restaurante %d: ", i+1);
		fgets(qualificacao[i].tipo_comida, 100, stdin);
		printf("Digite a nota do restaurante %d: ", i+1);
		scanf("%d", &qualificacao[i].avaliacao);
		while(qualificacao[i].avaliacao < 0 || qualificacao[i].avaliacao >5){
			printf("Nota invalida\n");
			printf("Digite a nota do restaurante %d: ", i+1);
			scanf("%d", &qualificacao[i].avaliacao);
		}
		fflush(stdin);
	}
	int maior = -1;
	int indice;
	for(i = 0; i < tamanho; i++)
	{
		if(qualificacao[i].avaliacao > maior)
		{
		maior = qualificacao[i].avaliacao;
		indice = i;
		}
	}
	printf("\n");
	printf("Restaurante: \n");
	for(i = 0; i < tamanho; i++)
	{
		printf("%s",qualificacao[i].nome_restaurante);
	}
	printf("\n");
	printf("Restaurante com maior nota vende o tipo de comida: ",qualificacao[indice].tipo_comida);
	return 0;
}
