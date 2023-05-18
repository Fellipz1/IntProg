// 1 - Um comerciante comprou um produto e quer vend�-lo com um lucro de 45% se o valor da compra for menor que R$20,00, caso contr�rio, o lucro ser� de 30%.
// Fa�a uma fun��o que receba valor do produto e imprima o valor da venda.
// O programa principal deve ler o valor do produto que ser� passado como par�metro. 

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
