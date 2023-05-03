// 11 - Faça a leitura do salário atual e do tempo de serviço de um funcionário. A seguir, em uma função, calcule o seu salário reajustado. Funcionários com até 1 ano de empresa, receberão aumento de 10%. Funcionários com mais de um ano de tempo de serviço, receberão aumento de 20%. A função deverá retornar o salário reajustado.

#include <stdio.h>

float sr(float sa, int ts) //sr=salario reajustado; sa=salario atual; ts= tempo de serviço; sn=salario novo
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
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Temos um teste com sa= 2000 e depois fiz duas variações uma com tempo de serviço de 1 e outra com 2 anos 
/*
// Teste 1
		main			void
Linha 	sa		ts		sn		condição
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
Linha 	sa		ts		sn		condição
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
