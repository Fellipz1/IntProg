/* 8. Faça uma função que receba uma string e um caractere e retorna o número de vezes que o caractere aparece na string.
*/

#include <stdio.h>

int encontrarChar(char string[], char caractere)
{
    int vezes = 0;
    int i;
    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == caractere) 
		{
            vezes++;
        }
    }
    return vezes;
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

    if (retorno != 0) 
	{
        printf("O numero de vezes que o caractere %c aparece %d vezes na string %s", caractere, retorno, string);
    } else 
	{
        printf("O caractere %c não aparece na string %s\n", caractere, string);
    }

    return 0;
}
