// 5) Fazer um programa para contar o número de espaços em brancos de uma string.

#include <stdio.h>

int main(void)
{
    int i, x = 0;
  
    char texto[60] = " s t u c t e s t r i n g = = chato d++++++";
  
    printf("Valor da variavel texto = %s\n", texto);
  
    for (i = 0; i < 60; i++)
    {
        if (texto[i] == ' ') 
		{
            x++;
        }
    }
  
    printf("O espaco aparece %d vezes na sua string = %s\n", x, texto);
  
    return 0;
}
