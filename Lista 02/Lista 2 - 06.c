// 6 - Elabore uma função que receba como parâmetros dois valores reais a e b. A função deve ler uma sequência de valores reais e imprimir a média aritmética dos valores que pertencerem 
// ao intervalo fechado entre a e b. A sequência de valores deverá ser encerrada quando for lido um valor negativo.
// Exemplo: Com entradas a=7, b=3 e sequência= 5 2 9 8 3 1 -2, a função deve imprimir o valor 4.

#include <stdio.h>

void media_intervalo(float a, float b) {
    float valor, soma = 0.0;
    int quantidade = 0;
    int validos = 0;

	printf("Para parar digite um numero negativo, apos digitar a sequencia!\n");

	if (b>a)
	{
		while (valor >= 0) 
		{
        if (valor <= b && valor >= a ) 
		{
            soma += valor;
            validos++;
        }
        quantidade++;

        printf("Digite o valor %d: ", quantidade);
        scanf("%f", &valor);
    	}
	}
    else {
    	while (valor >= 0) 
		{
        if (valor >= b && valor <= a ) 
		{
            soma += valor;
            validos++;
        }
        quantidade++;

        printf("Digite o valor %d: ", quantidade);
        scanf("%f", &valor);
    	}
	}

    if (validos > 0) 
	{
        float media = soma / validos;
        printf("A media dos valores no intervalo [%.2f, %.2f] = %.2f\n", a, b, media);
    } else 
	{
        printf("Nao foram digitados valores no intervalo [%.2f, %.2f]\n", a, b);
    }
}

int main() 
{
    float a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    media_intervalo(a, b);

    return 0;
}
