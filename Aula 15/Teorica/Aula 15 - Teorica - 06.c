// 6) Refaça o programa anterior criando uma função que receberá como parâmetro a string e retornará o número de espaços em branco que a string contém.

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
    char texto[60];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int numEspacos = contarEspacos(texto);
    printf("O espaco aparece %d vezes na sua string.\n", numEspacos);
  
    return 0;
}
