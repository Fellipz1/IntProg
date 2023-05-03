// 11 - Fa�a a leitura do sal�rio atual e do tempo de servi�o de um funcion�rio. A seguir, em uma fun��o, calcule o seu sal�rio reajustado. Funcion�rios com at� 1 ano de empresa, receber�o aumento de 10%. Funcion�rios com mais de um ano de tempo de servi�o, receber�o aumento de 20%. A fun��o dever� retornar o sal�rio reajustado.

#include <stdio.h>

float sr(float sa, int ts) //sr=salario reajustado; sa=salario atual; ts= tempo de servi�o; sn=salario novo
{
  if (ts <= 1) 
  {
    return sa * 1.1;
  } 
  else 
  {
    return sa * 1.2;
  }
}

int main() {
	
  float sa, sn;
  int ts;

  printf("Digite o salario atual do funcionario: R$");
  scanf("%f", &sa);

  printf("Digite em anos o tempo de servico do funcionario: ");
  scanf("%d", &ts);

  sn = sr(sa, ts);

  printf("O salario com reajuste para esse funcionario = R$%.2f\n", sn);

  return 0;
}


// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no c�digo com o #include sendo a linha 1
// Temos um teste com sa= 2000 e depois fiz duas varia��es uma com tempo de servi�o de 1 e outra com 2 anos 
/*
// Teste 1
		main			void
Linha 	sa		ts		sn		condi��o
15		?		?		?			?	
17		?		?		?			?
18 		?		?		?			?
20		?		?		?			?		Imprime: Digite o salario atual do funcionario: R$
21		2000	?		?			?
23		2000	?		?			?		Imprime: Digite em anos o tempo de servico do funcionario
24		2000	1		?			?	
26		2000	1		?			?		
3		2000	1		?			?			
5		2000	1		?			V				
7		2000	1		2200		V					 											
28		2000	1		2200		V		Imprime: O salario com reajuste para esse funcionario = R$2200.00
30					

// Teste 2
		main			void
Linha 	sa		ts		sn		condi��o
15		?		?		?			?	
17		?		?		?			?
18 		?		?		?			?
20		?		?		?			?		Imprime: Digite o salario atual do funcionario: R$
21		2000	?		?			?
23		2000	?		?			?		Imprime: Digite em anos o tempo de servico do funcionario
24		2000	2		?			?	
26		2000	2		?			?		
3		2000	2		?			?			
5		2000	2		?			F				
7		2000	2		?			F					 
9		2000	2		2400		V
11		2000	2		2400		V												
28		2000	2		2400		V		Imprime: O salario com reajuste para esse funcionario = R$2400.00
30					

*/
