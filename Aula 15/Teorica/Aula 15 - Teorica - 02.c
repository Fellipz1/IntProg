// 2) Fazer um programa que leia uma string e imprima o primeiro caractere.

#include <stdio.h>

int main(void)
{
  int i;
  
  char texto[7] = "string";
  
  printf("Valor da variavel texto = %s\n", texto);
  
  for (i=0; i<1; i++)
  {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
  }
  
  getch();
  return 0;
}
