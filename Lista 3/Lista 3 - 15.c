/* 15. Crie uma função que receba uma string de no máximo 50 caracteres e inverta a ordem da string digitada;
Exemplo:
Entrada: Teste
Saída: etseT
*/

#include <stdio.h>
#include <string.h>

void inverterString(char string[]) 
{
    int tamanho = strlen(string);
    int i, j;
    
    for (i = 0, j = tamanho - 1; i < j; i++, j--) 
	{
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main() 
{
    int tamanho = 50;
    char string[tamanho];
        
    printf("Digite a string: ");
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    
    inverterString(string);
    
    printf("String invertida: %s\n", string);

    return 0;
}
