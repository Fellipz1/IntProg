// c) Refa�a seu programa para que, ap�s o usu�rio digitar o valor de N (por exemplo, 6), o programa imprima o tri�ngulo:

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

void imprimirTriangulo(int N)
{
    int x = 1;

    while (x <= N)
    {
        int y = 1;

        while (y <= x)
        {
            printf("%d ", y);
            y++;
        }

        printf("\n");
        x++;
    }
}

int main()
{
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Linha: ");
    imprimirLinha(N);

    printf("Triangulo:\n");
    imprimirTriangulo(N);

    return 0;
}
