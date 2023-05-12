// 7 - a) Escreva uma função que recebe um inteiro N como parâmetro e imprime uma linha contendo os números de 1 até N. Por exemplo, se o valor do parâmetro for 6, a função deverá imprimir: 1 2 3 4 5 6
// b) Faça um programa para testar a função, solicitando que o usuário digite o valor de N.

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

