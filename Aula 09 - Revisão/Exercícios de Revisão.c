// 1 - Um comerciante comprou um produto e quer vend�-lo com um lucro de 45% se o valor da compra for menor que R$20,00, caso contr�rio, o lucro ser� de 30%.
// Fa�a uma fun��o que receba valor do produto e imprima o valor da venda.
// O programa principal deve ler o valor do produto que ser� passado como par�metro. 

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

// 2 - Fa�a uma fun��o que receba o sal�rio de uma pessoa e o sal�rio m�nimo, calcule e retorne o valor do desconto do INSS segundo a tabela seguir:
// Sal�rio 															Faixa de Desconto
// Menor ou igual a metade do sal�rio m�nimo 						Isento

// Maior que metade do sal�rio m�nimo e menor ou igual que
// 50% a mais que o sal�rio m�nimo									20% do sal�rio

// Maior que 50% a mais que o sal�rio m�nimo e menor ou
// igual que o dobro do sal�rio m�nimo								25% do sal�rio

// Acima que o dobro do sal�rio m�nimo 								30% do sal�rio

// O programa principal deve ler o sal�rio e o salario m�nimo que ser� passado como par�metro e imprimir o valor do desconto. 

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

