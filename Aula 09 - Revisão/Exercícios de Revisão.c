// 1 - Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
// Faça uma função que receba valor do produto e imprima o valor da venda.
// O programa principal deve ler o valor do produto que será passado como parâmetro. 

/*
#include<stdio.h>

void valorDaCompra (float valor)
{
	float valoratual;
		if (valor < 20 && valor>0){
			valoratual = (0.45*valor)+valor;
			printf ("Com desconto = R$%.2f",valoratual);
			}
		else{
			valoratual =(0.3*valor)+valor;
			printf ("Com desconto = R$%.2f",valoratual);
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
*/

// 2 - Faça uma função que receba o salário de uma pessoa e o salário mínimo, calcule e retorne o valor do desconto do INSS segundo a tabela seguir:
// Salário 															Faixa de Desconto
// Menor ou igual a metade do salário mínimo 						Isento

// Maior que metade do salário mínimo e menor ou igual que
// 50% a mais que o salário mínimo									20% do salário

// Maior que 50% a mais que o salário mínimo e menor ou
// igual que o dobro do salário mínimo								25% do salário

// Acima que o dobro do salário mínimo 								30% do salário

// O programa principal deve ler o salário e o salario mínimo que será passado como parâmetro e imprimir o valor do desconto. 

/*
#include <stdio.h>

void taxadejuros(float salarioFunc, float salarioMin)
{
	float razao, taxa, valorImp;
	
	razao=salarioFunc/salarioMin;
		
	if(	razao <= 0.5 ){
		taxa = 0.00;
		valorImp = (taxa*salarioFunc);
		printf ("Isento");
	}
	else{
		if (razao >0.5 && razao<=1.5){
			taxa = 0.2;
			valorImp = (taxa*salarioFunc);
			printf ("O valor do imposto = %.2f",valorImp);
			}
		else{
			if (razao >=1.5 && razao<=2){
				taxa = 0.25;
				valorImp = (taxa*salarioFunc);
				printf ("O valor do imposto = %.2f",valorImp);
			}
			else{
				if (razao >2){
					taxa = 0.3;
					valorImp = (taxa*salarioFunc);
					printf ("O valor do imposto = %.2f",valorImp);
				}
			}
		}
	}
}

int main ()
{
	float salarioFunc, salarioMin;	
	
	printf ("Digite o valor do seu salario atual: \n");
	scanf("%f", &salarioFunc);
	
	printf("Digite o valor do salario minimo: \n");
	scanf ("%f", &salarioMin);
	
	taxadejuros(salarioFunc, salarioMin);
	return 0;
}
*/

