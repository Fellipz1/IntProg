// 9 - Fa�a um programa que leia uma sequ�ncia de n�meros positivos. Calcule a quantidade de n�meros pares e �mpares, 
// a m�dia de valores pares e a m�dia geral dos n�meros lidos. O n�mero que encerrar� a leitura ser� zero.

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
