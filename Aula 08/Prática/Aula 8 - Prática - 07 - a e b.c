// 7 - a) Escreva uma fun��o que recebe um inteiro N como par�metro e imprime uma linha contendo os n�meros de 1 at� N. Por exemplo, se o valor do par�metro for 6, a fun��o dever� imprimir: 1 2 3 4 5 6
// b) Fa�a um programa para testar a fun��o, solicitando que o usu�rio digite o valor de N.

#include <stdio.h>

void imprimirLinha(int N)
{
    int x = 1;

    while (x <= N)
    {
        printf("%d ", x);
        x++;
    }

    printf("\n");
}
int main()
{
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Linha: ");
    imprimirLinha(N);

    return 0;
}

