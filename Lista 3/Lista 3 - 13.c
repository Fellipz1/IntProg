/* 13. Elabore uma função que receba uma string e um caractere e remova toda ocorrência do caractere na string.
*/

#include <stdio.h>
#include <string.h>

void removerChar(char string[], char caractere) 
{
    int i, j;
    int tamanho = strlen(string);
    
    for (i = 0, j = 0; i < tamanho; i++) 
	{
        if (string[i] != caractere) 
		{
            string[j] = string[i];
            j++;
        }
    }
    
    string[j] = '\0';
}

int main() 
{
    char string[100];
    char caractere;
    
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    removerChar(string, caractere);

    printf("String resultante: %s\n", string);

    return 0;
}
