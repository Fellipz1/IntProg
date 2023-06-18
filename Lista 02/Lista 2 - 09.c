// 9 - Faça um programa que leia uma sequência de números positivos. Calcule a quantidade de números pares e ímpares, 
// a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.

#include <stdio.h>

void calcularEImprimirEstatisticas() 
{
    int valor;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int somaPares = 0;
    int quantidadeTotal = 0;
    float mediaGeral, mediaPares;

    printf("Digite valores positivos (encerre com 0):\n");

    do 
	{
        scanf("%d", &valor);

        if (valor % 2 == 0 && valor != 0) 
		{
            quantidadePares++;
            somaPares += valor;
        } else if (valor != 0) 
		{
            quantidadeImpares++;
        }

        quantidadeTotal++;
    } while (valor != 0);

    mediaGeral = (float)somaPares / quantidadeTotal;
    mediaPares = (float)somaPares / quantidadePares;

    printf("\n");
    printf("Resultado:\n");
    printf("Quantidade de numeros pares: %d\n", quantidadePares);
    printf("Quantidade de numeros impares: %d\n", quantidadeImpares);
    printf("Media de valores pares: %.2f\n", mediaPares);
    printf("Media geral dos numeros lidos: %.2f\n", mediaGeral);
}

int main() 
{
    calcularEImprimirEstatisticas();
    return 0;
}
