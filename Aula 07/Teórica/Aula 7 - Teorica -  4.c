// 4 - 
/* 
Elabore uma função que receba como parâmetro a idade de uma pessoa (inteiro) e imprima:
 se idade < 13: “Criança”;
 se 13 = idade < 20: “Adolescente”;
 se 20 = idade < 65: “Adulto”; e,
 se idade = 65: “Idoso”.
Para fazer o programa, combine o uso de 3 pares de if-else.
Faça um programa que leia do teclado a idade da pessoa e imprima a mensagem. Teste com o valor 15 e com o valor 70.
*/


# include <stdio.h>

void idade ()
{
	int idade; 
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("A idade da pessoa = %d anos", idade);
	
	if (idade >= 0 && idade <= 12) 
  	{
    	printf("A pessoa e uma crianca");
  	} 
  	else if (idade >= 13 && idade <= 19) 
 	{
    	printf("A pessoa e um adolescente");
  	} 
  	else if (idade >= 20 && idade <= 65) 
  	{
    	printf("A pessoa e um adulto");
  	}	 
  	else 
  	{
    	printf("A pessoa e uma idosa");
  	}
}

int main ()
{
	idade();
	return 0;
}



