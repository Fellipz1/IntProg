// 8 - Faça uma função que receba um número inteiro e imprima o número lido é par ou impar.

#include <stdio.h>

void questao8(int numero)
{
    if (numero % 2 == 0) 
	{
        printf("O numero %d = par\n", numero);
    } 
	else 
	{
        printf("O numero %d = impar\n", numero);
    }
}

int main() 
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    questao8(numero);

    return 0;
}


// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer um teste com 4 e outro com 5
/*
// Teste 1
		main		void
Linha 	numero		condição
15		?			?	
17		?			?
19		?			?			Imprime: Digite um numero inteiro:  
20		4			?
22		4			?		
3		4			?			
5		4			V	
7		4			V			Imprime: O numero 4 = par 									
24		

// Teste 2
		main		void
Linha 	nota		condição
15		?			?	
17		?			?
19		?			?			Imprime: Digite um numero inteiro:  
20		5			?
22		5			?		
3		5			?			
5		5			F	
7		5			F			
9		5			V
11		5			V			Imprime: O numero 5 = impar									
24

*/
