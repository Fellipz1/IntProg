// 10) Escreva uma fun��o que receba uma string, conte quantos caracteres desta string s�o iguais a 'a' e substitua os que forem iguais 
// a 'a' por 'b'. A fun��o dever� retornar o n�mero de caracteres modificados.

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
