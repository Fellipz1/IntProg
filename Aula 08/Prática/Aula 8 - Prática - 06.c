// 6 - Escreva uma fun��o que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores. 
// Exemplo: se os valores lidos forem 5 e 2, a sa�da dever� ser 5 4 3 2.
// Fa�a tamb�m um programa principal que leia do teclado o que for necess�rio para executar a chamada correta desta fun��o.

#include <stdio.h>

void n1aten2(int n1, int n2)
{
    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            printf("%d ", n1);
            n1 = n1 + 1;
        }
    }
    else
    {
        while (n1 >= n2)
        {
            printf("%d ", n1);
            n1 = n1 - 1;
        }
    }
}

int main()
{
    int n1, n2;

    printf("Digite o valor de n1: ");
    scanf("%d", &n1);

    printf("Digite o valor de n2: ");
    scanf("%d", &n2);

    printf("Intervalo fechado: ");
    n1aten2(n1, n2);

    return 0;
}
