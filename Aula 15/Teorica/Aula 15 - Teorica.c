// 1) Fazer um programa que leia uma string e a imprima na tela.
// Esse abaixo s� pode imprimir o nome depois antes espa�o, por conta do espa�o, o scanf F s� le at� o espa�o o restante n�o imprime.
/*
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
*/
// Esse debaixo imprime at� os espa�os
/*
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
*/

// 2) Fazer um programa que leia uma string e imprima o primeiro caractere.
/*
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
*/

// 3) Fazer um programa que leia uma string e imprima os 3 primeiros caracteres.
/*
#include <stdio.h>

int main(void)
{
  int i;
  
  char texto[7] = "string";
  
  printf("Valor da variavel texto = %s\n", texto);
  
  for (i=0; i<3; i++)
  {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
  }
  
  getch();
  return 0;
}
*/

// 4) Fazer um programa que leia uma string e um inteiro i. O programa deve imprimir o caractere do �ndice i da string.
/*
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
*/

// 5) Fazer um programa para contar o n�mero de espa�os em brancos de uma string.
/*
#include <stdio.h>

int main(void)
{
    int i, x = 0;
  
    char texto[60] = " s t u c t e s t r i n g = = chato d++++++";
  
    printf("Valor da variavel texto = %s\n", texto);
  
    for (i = 0; i < 60; i++)
    {
        if (texto[i] == ' ') 
		{
            x++;
        }
    }
  
    printf("O espaco aparece %d vezes na sua string = %s\n", x, texto);
  
    return 0;
}
*/

// 6) Refa�a o programa anterior criando uma fun��o que receber� como par�metro a string e retornar� o n�mero de espa�os em branco que a string cont�m.
/*
#include <stdio.h>

int contarEspacos(char texto[])
{
    int i, espacos = 0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == ' ') 
        {
            espacos++;
        }
    }
  
    return espacos;
}

int main(void)
{
    char texto[60];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int numEspacos = contarEspacos(texto);
    printf("O espaco aparece %d vezes na sua string.\n", numEspacos);
  
    return 0;
}
*/

// 7) Fazer um programa para contar o n�mero de vogais numa cadeia de caracteres.
// E
// 8) Refa�a o programa anterior criando uma fun��o que receber� como par�metro a string e retornar� o n�mero de vogais que a string cont�m.
/*
#include <stdio.h>

int contarVogais(char texto[])
{
    int i, vogais = 0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
        {
            vogais++;
        }
    }
  
    return vogais;
}

int main(void)
{
    char texto[100];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int numVogais = contarVogais(texto);
    printf("O numero de vogais na string e: %d\n", numVogais);
  
    return 0;
}
*/

// 9) Escrever um programa que leia uma string (com mais de uma palavra) e fa�a com  que a primeira letra de cada palavra fique em mai�scula. Para isso, basta 
// modificar cada letra atrav�s da express�o: chrNome[0] = chrNome[0] � 'a' + 'A';
// Exemplo: Entrada: lab. de linguagem de programacao
// Sa�da: Lab. De Linguagem De Programacao

/*
#include <stdio.h>
#include <ctype.h>

void converterPrimeiraLetraMaiuscula(char texto[])
{
    int i;

    // Converte a primeira letra da string em mai�scula
    texto[0] = toupper(texto[0]);

    // Converte a primeira letra de cada palavra em mai�scula
    for (i = 1; texto[i] != '\0'; i++)
    {
        if (texto[i - 1] == ' ')
        {
            texto[i] = toupper(texto[i]);
        }
    }
}

int main(void)
{
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    converterPrimeiraLetraMaiuscula(texto);

    printf("Texto com as primeiras letras em maiuscula: %s\n", texto);

    return 0;
}
*/

// 10) Escreva uma fun��o que receba uma string, conte quantos caracteres desta string s�o iguais a 'a' e substitua os que forem iguais 
// a 'a' por 'b'. A fun��o dever� retornar o n�mero de caracteres modificados.
/*
#include <stdio.h>

int substituirCaracteres(char texto[])
{
    int i, caracteresModificados = 0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a')
        {
            texto[i] = 'b';
            caracteresModificados++;
        }
    }
  
    return caracteresModificados;
}

int main(void)
{
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int numCaracteresModificados = substituirCaracteres(texto);

    printf("Texto modificado: %s", texto);
    printf("Numero de caracteres modificados: %d\n", numCaracteresModificados);

    return 0;
}
*/
