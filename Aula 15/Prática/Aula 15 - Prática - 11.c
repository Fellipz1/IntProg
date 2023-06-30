// 11) Fazer uma fun��o para imprimir uma string recebida como par�metro sem os espa�os em branco. Para isso, a string n�o deve ser modificada.

#include <stdio.h>

void imprimirStringSemEspacos(char texto[]) 
{
    int i = 0;
    while (texto[i] != '\0') 
	{
        if (texto[i] != ' ') 
		{
            printf("%c", texto[i]);
        }
        i++;
    }
    printf("\n");
}

int main() 
{
    char texto[50];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    printf("String original: %s\n", texto);
    printf("String sem espacos: ");
    imprimirStringSemEspacos(texto);

    return 0;
}
