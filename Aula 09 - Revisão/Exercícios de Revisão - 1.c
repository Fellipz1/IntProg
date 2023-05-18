// 1 - Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
// Faça uma função que receba valor do produto e imprima o valor da venda.
// O programa principal deve ler o valor do produto que será passado como parâmetro. 

#include<stdio.h>

void valorDaCompra (float valor)
{
	float valorvenda;
		if (valor < 20 && valor>0){
			valorvenda = (0.45*valor)+valor;
			printf ("Com desconto = R$%.2f",valorvenda);
			}
		else{
			valorvenda =(0.3*valor)+valor;
			printf ("Com desconto = R$%.2f",valorvenda);
		}	
}

int main ()
{
	float valor;
	
	printf("Digite o valor do produto : R$\n");
	scanf("%f", &valor);
	
	valorDaCompra (valor);
	
	return 0;
}
