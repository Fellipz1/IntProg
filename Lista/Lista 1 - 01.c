// 1 - Faça uma função que retorne a soma de dois números reais passados como parâmetro.

#include <stdio.h>

float soma(float a, float b)
{
	float soma = a + b; 
    return soma;
}
    
int main() 
{
    float a, b;
    float valor; 
    
    printf("Digite dois valores pertencentes ao campos dos reais\n");

	printf("Valor 1:\n");
    scanf("%f", &a);

	printf("Valor 2:\n");
    scanf("%f", &b);
        
    valor = soma (a, b);

    printf("A soma de %.2f + %.2f dos dois valores digitados = %.2f\n", a, b, valor);

    return 0;
}


// Abaixo segue o teste de mesa
/*
// Nesse exemplo digitamos a=5 e b=4
/*
		main 	calculo
Linha 	a 	b	soma
9		?	?	?
11		?	?	?
12		?	?	?
14		?	?	?	Imprime: Digite dois valores pertencentes ao campo dos reais
16		?	?	?	Imprime: Digite o valor 1
17		5	?	?
19		5	?	?	Imprime: Digite o valor 2
20		5	4	?	
22		5	4	?
3		5	4	?
5		5	4	9
6		?	?	9	
24		?	?	9	Imprime: A soma de a + b dos dois valores digitados = 9
*/

