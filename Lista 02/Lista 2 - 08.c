// 8 - Escreva uma função que leia valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos 
// e o percentual de valores negativos e positivos. Imprima os resultados. O número que encerrará a leitura será zero.

#include <stdio.h>

void calcularEImprimirEstatisticas() {
    int valor;
    int soma = 0;
    int quantidadePositivos = 0;
    int quantidadeNegativos = 0;
    int quantidadeTotal = 0;

    printf("Digite os valores (encerrando com 0):\n");

    do 
	{
        scanf("%d", &valor);

        if (valor > 0) 
		{
            quantidadePositivos++;
        } else if (valor < 0) 
		{
            quantidadeNegativos++;
        }

        soma += valor;
        quantidadeTotal++;
    } while (valor != 0);

    float media = (float) soma / (quantidadeTotal - 1); // para excluir o zero

    printf("\n");
    printf("Resultado:\n");
    printf("Media: %.2f\n", media);
    printf("Quantidade de valores positivos: %d\n", quantidadePositivos);
    printf("Quantidade de valores negativos: %d\n", quantidadeNegativos);

    float percentualPositivos = (float) quantidadePositivos / (quantidadeTotal - 1) * 100;
    float percentualNegativos = (float) quantidadeNegativos / (quantidadeTotal - 1) * 100;

    printf("Percentual de valores positivos: %.2f%%\n", percentualPositivos);
    printf("Percentual de valores negativos: %.2f%%\n", percentualNegativos);
}

int main() 
{
    calcularEImprimirEstatisticas();
    return 0;
}
