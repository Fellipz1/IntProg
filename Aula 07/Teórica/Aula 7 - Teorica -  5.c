// 5 - Escreva um programa que leia o c�digo de um determinado produto e mostre a sua classifica��o. Utilize a tabela abaixo como refer�ncia: 

#include <stdio.h>

int main ()
{
	int cod;
	printf("Digite um codigo de 1 a 4: \n");
	scanf("%d", &cod);
	
	switch (cod){
		case 1: printf("Alimento nao-perecivel");
											break;
		case 2: printf("Alimento perec�iel");
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
