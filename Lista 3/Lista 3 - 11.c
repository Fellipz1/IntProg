/* 11. Escreva uma função que retorne o número de espaços em branco contidos em uma string passada como parâmetro.
*/

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
    int tamanho =60;
    char texto[tamanho];
  
    printf("Digite uma string: ");
    fgets(texto, tamanho, stdin);

    int numEspacos = contarEspacos(texto);
    printf("O espaco aparece %d vezes na sua string.\n", numEspacos);
  
    return 0;
}
