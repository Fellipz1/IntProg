// 16 - Desenvolva um programa que pergunte um c�digo e de acordo com o valor digitado seja apresentado o cargo correspondente (utilize m�ltipla escolha (switch)). Caso o usu�rio digite um c�digo que n�o esteja na tabela, mostrar uma mensagem de c�digo inv�lido. Utilize a tabela abaixo:
/*
C�digo Cargo 
101 Vendedor 
102 Atendente 
103 Auxiliar
T�cnico 
Lista n� 01 3
104 Assistente 
105 Coordenador
de Grupo 
106 Gerente
*/

#include <stdio.h>

int main(){
	
	int cod;
	printf ("Digite o codigo: ");
	scanf("%d", &cod);
	
	switch(cod){
		case 101: printf("Vendedor");
					break;
		case 102: printf("Atendente");
					break;
		case 103: printf("Auxiliar Tecnico");
					break;
		case 104: printf("Assistente");
					break;
		case 105: printf("Coordenador de Grupo");
					break;
		case 106: printf("Gerente");
					break;
		default: printf("Numero Invalido");
				break;
	}
	
	return 0;
}
