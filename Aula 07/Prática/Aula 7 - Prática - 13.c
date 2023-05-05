// 13 - Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips.
// Faça um programa que calcule o valor total a ser pago por uma pessoa.
// O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).

#include <stdio.h>

void custo ()
{
	int opcao;
	float preco, resultado;
	
	printf("Tipo de comprador: \n");
	printf("1 - Cliente \n");
	printf("2 - Funcionario \n");
	printf("3 - Cliente VIP \n");	
	printf("Entre com sua opcao: ");
	scanf("%d", &opcao);
	printf("Digite o valor da compra: ");
	scanf("%f", &preco);
	
	switch (opcao){
		case 1:
			printf("Como voce e %d = Cliente, o preco = R$: %.2f", opcao ,preco);
																		break;
		case 2:
			resultado = preco*0.9;
			printf("Como voce e %d = Funcionario, o preco = R$: %.2f", opcao ,resultado);
																					break;
		case 3:
			resultado = preco*0.95;
			printf("Como voce e %d = Cliente VIP, o preco = R$: %.2f", opcao ,resultado);	
																				break;
		default :
			printf("Digite um tipo de comprador valido");
													break;
	}
}

int main()
{
	custo();
	return 0;
}

