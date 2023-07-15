/* 14. Crie uma função que receba uma frase e a exiba na tela de forma soletrada, ou seja, cada letra deve ser exibida na tela separada por hífen.
*/

#include <stdio.h>
#include <string.h>

void soletrarFrase(const char frase[]) 
{
    int tamanho = strlen(frase);
    int i;
    
    for (i = 0; i < tamanho; i++) 
	{
        printf("%c-", frase[i]);
    }
}

int main() 
{
	int tamanho = 100;
    char frase[tamanho];
    
    printf("Digite uma frase: ");
    fgets(frase, tamanho, stdin);
    frase[strcspn(frase, "\n")] = '\0'; 
    
    soletrarFrase(frase);

    return 0;
}
