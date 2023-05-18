// 2 - Faça uma função que receba o salário de uma pessoa e o salário mínimo, calcule e retorne o valor do desconto do INSS segundo a tabela seguir:
// Salário 															Faixa de Desconto
// Menor ou igual a metade do salário mínimo 						Isento

// Maior que metade do salário mínimo e menor ou igual que
// 50% a mais que o salário mínimo									20% do salário

// Maior que 50% a mais que o salário mínimo e menor ou
// igual que o dobro do salário mínimo								25% do salário

// Acima que o dobro do salário mínimo 								30% do salário

// O programa principal deve ler o salário e o salario mínimo que será passado como parâmetro e imprimir o valor do desconto. 

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

