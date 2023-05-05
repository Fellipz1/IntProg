// 10 - Construa a fun��o classificaNadador que recebe a idade de um nadador (n�mero inteiro) como par�metro e imprime sua categoria, de acordo com a tabela abaixo: Fa�a um programa que leia a idade de um nadador e imprima sua categoria.

#include <stdio.h>

void classificaNadador()
{
	int idade;
	
	printf("Digite a idade do nadador: \n");
	scanf("%d", &idade);
	
	if (idade>=5 && idade<=7){
		printf("Infantil A");
	}
		else if (idade>=8 && idade<=10){
			printf("Infantil B");
		}
		else if (idade>=11 && idade<=13){
			printf("Juvenil A");
		}
		else if (idade>=14 && idade<=17){
			printf("Juvenil B");
		}
		else if (idade>=18 && idade<=30){
			printf("Adulto");
		}
		else if (idade>=30){
			printf("Senior");
		}
	else{
		printf("Idade invalida");
		}
}
int main()
{
	classificaNadador();
	return 0;
}

