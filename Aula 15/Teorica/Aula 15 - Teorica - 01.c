// 1) Fazer um programa que leia uma string e a imprima na tela.
// Esse abaixo só pode imprimir o nome depois antes espaço, por conta do espaço, o scanf F só le até o espaço o restante não imprime.

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

// Esse debaixo imprime até os espaços

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
