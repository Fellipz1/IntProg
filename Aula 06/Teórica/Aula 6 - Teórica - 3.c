// 3) Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio considerar o m�s em que ela nasceu).

#include <stdio.h>

void idade() 
{
     int an;
  
    printf("Digite o ano do seu nascimento: \n");
    scanf("%d", &an);
	int idade = 2023 - an;

	if (idade>=16){
		printf("Voce pode votar esse ano \n");
	}
  		else {
    	printf("Voce nao pode votar esse ano \n");
  	}
}

int main() 
{
  idade();
  return 0;
}
