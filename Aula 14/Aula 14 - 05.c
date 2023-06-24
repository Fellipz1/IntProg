// 5) Faça um programa que crie uma matriz NxM e inicialize-a com valores 
// digitados pelo usuário. Seu programa deve calcular e imprimir a soma dos valores 
// de cada linha e a média dos valores de cada coluna.

#include <stdio.h>

int main()
{
    int x, y, i, j;

    printf("Digite quantas linhas voce quer na sua matriz: \n");
    scanf("%d", &x);

    printf("Digite quantas colunas voce quer na sua matriz: \n");
    scanf("%d", &y);

    int matriz[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("Elemento[%d][%d] = \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < x; i++)
    {
        int somax = 0;
        for (j = 0; j < y; j++)
        {
            somax += matriz[i][j];
        }
        printf("A soma da linha %d = %d\n", i+1, somax);
    }

    for (j = 0; j < y; j++)
    {
        int somay = 0;
        for (i = 0; i < x; i++)
        {
            somay += matriz[i][j];
        }
        float mediay = (float)somay / x;
        printf("A media da coluna %d = %.2f\n", j+1, mediay);
    }

    return 0;
}
