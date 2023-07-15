/* 10. Escreva uma função que receba uma string e um caractere e retorne qual a última posição na string em que o caractere aparece. Se o caracter não estiver na string, a função deve retornar -1.
*/

#include <stdio.h>

int encontrarChar(char string[], char caractere)
{
    int vezes = 0;
    int i1;
    int i=0;
    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == caractere) 
		{
            i1=i;
        }
    }
    return i1;
}

int main()
{
    char string[100];
    char caractere;
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int retorno = encontrarChar(string, caractere);

    printf("A ultima vez que o caracter %c aparece por ultimo na posicao %d, da string %s", caractere, retorno, string);

    return 0;
}
