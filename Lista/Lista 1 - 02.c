// 2 - Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como parâmetro o salário atual do funcionário e a porcentagem de aumento. A função deverá, ao final, imprimir o novo valor do salário e o valor do aumento.

#include <stdio.h>

void questao2(float salario, float percentual_aumento) 
{
    float ns = salario * (1 + percentual_aumento/100); //ns=novo salario
    float va = ns - salario; //va=valor do aumento

    printf("Novo salario: R$ %.2f\n", ns);
    printf("Valor do aumento: R$ %.2f\n", va);
}

int main() 
{
    float salario, aumento;

    printf("Digite o atual salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &aumento);

    questao2(salario, aumento);

    return 0;
}


// Abaixo segue o teste de mesa
/*
// Nesse exemplo digitamos salario = 2000 e aumento = 10
/*
		main 					calculo
Linha 	salario 	aumento		ns			va
12		?			?			?			?
15		?			?			?			?
16		?			?			?			?			Imprime: Digite o atual salario do funcionario 
17		2000.00		?			?			?
19		2000.00		?			?			?			Imprime: Digite a porcentagem do aumento:
20		2000.00		10.00		?			?
22		2000.00		10.00		?			?
03		2000.00		10.00		?			?
05		2000.00		10.00		2200.00		?
06		2000.00		10.00		2200.00		200.00
08		2000.00		10.00		2200.00		200.00		Imprime: Novo salario : R$ 2200.00		
09		2000.00		10.00		2200.00		200.00		Imprime: Valor do aumento: R$ 200.00
24	
*/
