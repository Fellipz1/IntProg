// 15) Escreva uma função que receba uma cadeia de caracteres de tamanho máximo 100, e retornar 1 se esta cadeia é palíndrome e zero 
// caso contrário. Uma palavra é dita ser palíndrome se a sequência de seus caracteres da esquerda para a direita é igual a sequência de 
// seus caracteres dadireita para a esquerda. Ex.: arara, asa, ovo...

#include <stdio.h>
#include <string.h> // A biblioteca string.h é frequentemente usada para fornecer várias funções para manipulação de strings em C. 

int verificarPalindromo(const char string[]) 
{
    int i = 0;
    int j = strlen(string) - 1; // da biblioteca string.h

    while (i < j) 
	{
        if (string[i] != string[j]) 
		{
            return 0; 
        }
        i++;
        j--;
    }

    return 1; 
}

int main() 
{
    char minhaString[101];

    printf("Digite uma cadeia de caracteres: ");
    fgets(minhaString, sizeof(minhaString), stdin);

    minhaString[strcspn(minhaString, "\n")] = '\0';

    if (verificarPalindromo(minhaString)) 
	{
        printf("E um palindromo!\n");
    } else 
	{
        printf("Nao e um palindromo!\n");
    }

    return 0;
}
