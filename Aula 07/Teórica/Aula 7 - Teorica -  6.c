// 6 - Elabore uma fun��o que recebe como par�metro um inteiro representando um dia da semana e imprime o seu respectivo nome por extenso. Considere que o n�mero 1 representa o domingo; 2, a segunda, etc.
// Caso o n�mero n�o corresponda a um dia da semana, a fun��o deve exibir a mensagem �Dia da semana inv�lido".
// Fa�a um programa para chamar a fun��o.
// Teste seu programa com um valor v�lido e outro inv�lido.

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
		case 3: printf("Ter�a");
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
