// 4) Fazer um programa que leia uma string e um inteiro i. O programa deve imprimir o caractere do índice i da string.

#include <stdio.h>

int main(void)
{
  int i,x;
  
  char texto[7] = "string";
  
  printf("Valor da variavel texto = %s\n", texto);

  printf("Sabendo que sua string tem 7 letras digite um valor de 1 a 7, \npara descobrir qual a letra esta nessa casa: ");
  scanf("%d",&x);
  
  for (i=x-1; i<x; i++)
  {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
  }
  
  getch();
  return 0;
}
