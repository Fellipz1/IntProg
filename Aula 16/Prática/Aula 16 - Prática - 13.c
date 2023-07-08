// 13) Utilize a estrutura definida abaixo nas questões a seguir:
/*
typedef struct {
 int codigo;
 char nome[100];
 int vendas[12];
} Produto;
*/
/*
a) Faça uma função que identifique o produto mais vendido em um ano. Esta função deve receber 
dois parâmetros: um vetor com a lista de produtos (estrutura acima) e o seu tamanho. A função deve 
retornar a posição (índice) na lista do produto mais vendido no ano. Para calcular a quantidade 
vendida de um produto, considere que o campo vendas armazena a quantidade de vendas do 
produto em cada mês do ano. Por exemplo, a posição 0 armazena a quantidade vendida em janeiro, 
a posição 3 armazena a quantidade de vendas em abril, etc.

b) Faça um programa principal que declare um vetor de produtos, mas considere que a loja possui capacidade 
para no máximo 100 produtos. O programa deve fazer a leitura de todos os produtos disponíveis através do 
teclado e depois chamar a função criada anteriormente para identificar o produto mais vendido. Ao final, o 
programa deve imprimir o nome e o código do produto mais vendido.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
	int codigo;
	char nome[100];
	int vendas[12];
} Produto;

int maisVendido(Produto produtos[], int tamanho)
{
	int maisVendido = 0;
	int qtdMaisVendida = 0;
	int i;
	int j;
	
	for(i = 0; i < tamanho; i++)
	{
		int qtdVendida = 0;
		for(j = 0; j < 12; j++)
		{
			qtdVendida += produtos[i].vendas[j];
		}
		if(qtdVendida > qtdMaisVendida)
		{
			qtdMaisVendida = qtdVendida;
			maisVendido = i;
		}
	}	
	return maisVendido;	
}
int main()
{
	Produto produtos[100];
	int tamanho;
	int i;
	int j;
	
	printf("Quantidade de produtos: ");
	scanf("%d", &tamanho);	
	
	for(i = 0; i < tamanho; i++)
	{
		printf("Produto %d\n", i+1);
		printf("Codigo: ");
		scanf("%d", &produtos[i].codigo);
		printf("Nome: ");
		scanf(" %[^\n]", &produtos[i].nome);
		
		for(j = 0; j < 12; j++)
		{
			printf("Quantidade vendida no mes %d: ", j+1);
			scanf("%d", &produtos[i].vendas[j]);
		}
		printf("\n");
	}
	
	int produtosMaisVendido = maisVendido(produtos, tamanho);	
	
	printf("Produto mais vendido:\n");
	printf("Codigo: %d\n", produtos[produtosMaisVendido].codigo);
	printf("Nome: %s\n", produtos[produtosMaisVendido].nome);	
	
	return 0; 
}
