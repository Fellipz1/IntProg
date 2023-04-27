// 4) Faça uma função que receba como parâmetro um número inteiro e imprima se este número é par ou ímpar.
// Em seguida, faça um programa que leia um número inteiro do teclado e chame a função.
// Faça um teste de mesa com o valor 4 e outro com o valor 5.

#include <stdio.h>

void verificacaoParOuImpar(int numero){
  
    if (numero % 2 == 0) 
	{
        printf("O numero %d = par", numero);
    } 
	else 
	{
        printf("O numero %d = impar", numero);
    }
}

int main() 
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    verificacaoParOuImpar(numero);

    return 0;
}

/*
// Teste de mesa para 4

		main 		void
Linha 	num 		condição			
15		?			?			
17		?			?			
19		?			?			Imprime: Digite um numero inteiro:
20		4			?		
22		4			?			
03		4			?
05		4			V
07		4			V			Imprime: O numero 4 = par
24

// Teste de mesa para 5
		main 		void
Linha 	num 		condição			
15		?			?			
17		?			?			
19		?			?			Imprime: Digite um numero inteiro:
20		5			?		
22		5			?			
03		5			?
05		5			F
07		5			F			
09		5			V			
11		5			V			Imprime: O numero 5 = impar
24
*/
