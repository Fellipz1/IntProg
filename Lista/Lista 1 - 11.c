// 11 - Fa�a a leitura do sal�rio atual e do tempo de servi�o de um funcion�rio. A seguir, em uma fun��o, calcule o seu sal�rio reajustado. Funcion�rios com at� 1 ano de empresa, receber�o aumento de 10%. Funcion�rios com mais de um ano de tempo de servi�o, receber�o aumento de 20%. A fun��o dever� retornar o sal�rio reajustado.
/*
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

  printf("Digite o salario atual do funcionario: ");
  scanf("%f", &sa);

  printf("Digite em anos o tempo de servico do funcionario: ");
  scanf("%d", &ts);

  sn = sr(sa, ts);

  printf("O salario com reajuste para esse funcionario = %.2f\n", sn);

  return 0;
}
*/
// Abaixo segue o teste de mesa
/*

*/

