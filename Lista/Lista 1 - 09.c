// 9 - Faça uma função que receba um número inteiro e teste se o valor lido termina com 0 (divisível por 10). Em caso positivo, exiba a metade deste número. Caso contrário, exibir a mensagem "O número digitado não termina com 0".

#include <stdio.h>

void vdp10(int num) //vdp10 = verificando divisibilidade por 10
{
  if (num % 10 == 0) {
    int metade = num / 2;
    printf("Como o numero foi divido por \n10 sem deixar resto, \nsua metade = %d\n", metade);
  } 
  else 
  {
    printf("O numero digitado nao termina com 0\n");
  }
}

int main() 
{
  int num;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  vdp10(num);

  return 0;
}

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer um teste com 4 e outro com 50
/*
// Teste 1
		main		void
Linha 	num	 		metade		condição
15		?			?			?	
17		?			?			?
19		?			?			?			Imprime: Digite um numero inteiro:  
20		4			?			?
22		4			?			?		
3		4			?			?			
5		4			?			F
6		4			?			F				
7		4			?			F			 
9		4			?			V
11		4			?			V			Imprime: O numero digitado nao termina com zero									
24		

// Teste 2
		main		void
Linha 	nota		metade		condição
15		?			?			?	
17		?			?			?
19		?			?			?			Imprime: Digite um numero inteiro:  
20		50			?			?
22		50			?			?		
3		50			?			?			
5		50			?			V
6		50			25			V			
7		50			25			V 			Imprime: Como o numero foi dividido por 10 sem deixar resto, sua metade = 25			
24

*/
