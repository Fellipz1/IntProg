// 6) Refa�a o programa anterior criando uma fun��o que receber� como par�metro a string e retornar� o n�mero de espa�os em branco que a string cont�m.

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
