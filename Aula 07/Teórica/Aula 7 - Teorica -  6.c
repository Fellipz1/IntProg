// 6 - Elabore uma função que recebe como parâmetro um inteiro representando um dia da semana e imprime o seu respectivo nome por extenso. Considere que o número 1 representa o domingo; 2, a segunda, etc.
// Caso o número não corresponda a um dia da semana, a função deve exibir a mensagem “Dia da semana inválido".
// Faça um programa para chamar a função.
// Teste seu programa com um valor válido e outro inválido.

#include <stdio.h>

int main ()
{
	int cod;
	printf("Sendo 1 = domingo e 7 = sabado\n");
	printf("Digite um numero de 1 a 7: ");
	scanf("%d", &cod);
	
	switch (cod){
		case 1: printf("Domingo");
											break;
		case 2: printf("Segunda");
											break;
		case 3: printf("Terça");
											break;		
		case 4: printf("Quarta");
											break;	
		case 5: printf("Quinta");
											break;	
		case 6: printf("Sexta");
											break;	
		case 7: printf("Sabado");
											break;																			
		default: printf("Codigo Invalido");
											break;																														
	}
	
	return 0;
}
