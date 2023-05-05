// 11 -  Para auxiliar os vendedores de uma loja na orientação aos clientes sobre as diversas formas de pagamento, desenvolver um algoritmo para:
// a) Imprimir o seguinte menu:
// b) Ler o código da opção de pagamento.
// c) Imprimir uma das mensagens de acordo com a opção lida:

#include <stdio.h>

void opcaoDePag ()
{
	int opcao;
	
	printf("Formas de pagamento: \n");
	printf("1 - A vista \n");
	printf("2 - Cheque para trinta dias \n");
	printf("3 - Em duas vezes \n");
	printf("4 - Em tres vezes \n");	
	printf("5 - Em quatro vezes \n");	
	printf("6 - A partir de cinco vezes \n");	
	printf("Entre com sua opcao: ");
	scanf("%d",&opcao);
	
	switch (opcao){
		case 1:
		printf("Opcao = 1: Desconto de 20%%");
										break;
		case 2: case 3: case 4:
		printf("Opcao = 2, 3 ou 4: Mesmo desconto de a vista");
														break;
		case 5:
		printf("Opcao = 5: Juros de 3% ao mes");
										break;
		case 6:
		printf("Opcao = 6: Juros de 5% ao mes");
										break;
		default :
			printf("Opcao <1 ou opcao >1: Opcao invalida");
													break;
	}
}

int main()
{
	opcaoDePag();
	return 0;
}
