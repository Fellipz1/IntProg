// 14) Fa�a uma fun��o que receba uma string do usu�rio (m�x. 20 caracteres) e um caractere qualquer. A fun��o dever� colocar um 
// espa�o branco em todas as ocorr�ncias do caractere da string e retornar o n�mero de trocas que foram realizadas.

#include <stdio.h>

int inserirEspacos(char string[], char caractere) 
{
    int i;
    int trocas = 0;

    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == caractere) 
		{
            string[i] = ' ';
            trocas++;
        }
    }

    return trocas;
}

int main() 
{
    char minhaString[21];
    char caractere;

    printf("Digite uma cadeia de caracteres (maximo de 20 caracteres): ");
    fgets(minhaString, sizeof(minhaString), stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int numTrocas = inserirEspacos(minhaString, caractere);

    printf("String modificada: %s\n", minhaString);
    printf("Numero de trocas realizadas: %d\n", numTrocas);

    return 0;
}
