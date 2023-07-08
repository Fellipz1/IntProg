// 7) Utilizando a estrutura medidas definida no exercício 2, faça um programa que leia a altura e o peso de 6 pessoas e imprima a média da altura e a média do peso do grupo.

#include <stdio.h>

struct medidas
{
    char nome[50];
    float peso;
    float altura;
};

int main()
{
    struct medidas pessoas[6]; // Array de 6 elementos do tipo struct medidas
    float somaAltura = 0;
    float somaPeso = 0;
    int i;

    printf("Cadastro de pessoas\n");

    for (i = 0; i < 6; i++)
    {
        printf("\nDigite os dados da pessoa %d:\n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 50, stdin);

        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("Altura (em cm): ");
        scanf("%f", &pessoas[i].altura);

        somaAltura += pessoas[i].altura;
        somaPeso += pessoas[i].peso;
    }

    float mediaAltura = somaAltura / 6;
    float mediaPeso = somaPeso / 6;

    printf("\nMédia da altura do grupo: %.2f cm\n", mediaAltura);
    printf("Média do peso do grupo: %.2f kg\n", mediaPeso);

    return 0;
}
