// 1) Fazer um programa que leia uma string e a imprima na tela.
// Esse abaixo s� pode imprimir o nome depois antes espa�o, por conta do espa�o, o scanf F s� le at� o espa�o o restante n�o imprime.

#include<stdio.h>

int main(void)
{
  char nome[30];
  
  printf("Digite seu nome: ");
  scanf("%s",nome);
  
  printf("O nome armazenado foi: %s", nome);
  
  getch();
  return 0;
}

// Esse debaixo imprime at� os espa�os

#include<stdio.h>

int main(void)
{
  char nome[30];
  
  printf("Digite seu nome: ");
  gets(nome);
  
  printf("O nome armazenado foi: %s", nome);
  
  getch();
  return 0;
}
