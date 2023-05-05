// 5 - Escreva um programa que leia o código de um determinado produto e mostre a sua classificação. Utilize a tabela abaixo como referência: 

#include <stdio.h>

int main ()
{
	int cod;
	printf("Digite um codigo de 1 a 4: \n");
	scanf("%d", &cod);
	
	switch (cod){
		case 1: printf("Alimento nao-perecivel");
											break;
		case 2: printf("Alimento perecíiel");
											break;
		case 3: printf("Vestuario");
											break;		
		case 4: printf("Limpeza");
											break;	
		default: printf("Codigo Invalido");
											break;																														
	}
	
	return 0;
}
