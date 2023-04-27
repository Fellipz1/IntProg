// 7 - Desenvolva a função saoPositivos que recebe como parâmetros dois números reais, informados pelo usuário e verifica se ambos são maiores que zero. A função deve retornar 1 (verdadeiro) se ambos forem positivos e 0 (falso) caso contrário.
// Faça um programa que leia dois números e chame a função, imprimindo "Ambos os valores sao positivos" ou "Ao menos um dos valores eh negativo.", dependendo do caso.
// Teste o programa com 1 e 2 e com 3 e -4.


#include <stdio.h>

void saoPositivos(float num1, float num2) {
  printf("OS VALORES SAO POSITIVOS?\n");
  if (num1 > 0 && num2 > 0) 
  {
    printf("1, isso indica que os valores sao maiores que zero\n");
  } 
  else 
  {
    printf("0, isso indica que um ou os dois valores nao sao maiores que zero\n");
  }
}

int main() 
{
  float num1, num2;
  printf("Digite um valor real: ");
  scanf("%f", &num1);

  printf("Digite um segundo valor real: ");
  scanf("%f", &num2);
  
  saoPositivos(num1, num2);

  return 0;
}

/*
// Teste pedido com 1 e 2
Digite um valor real: 2
Digite um segundo valor real: 2
OS VALORES SAO POSITIVOS?
1, isso indica que os valores sao maiores que zero
// Teste para 3 e -4
Digite um valor real: 3
Digite um segundo valor real: -4
OS VALORES SAO POSITIVOS?
0, isso indica que um ou os dois valores nao sao maiores que zero
*/

