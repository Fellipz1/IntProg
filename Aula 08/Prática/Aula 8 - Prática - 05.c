// 5 - Escreva uma função que recebe como parâmetro um número inteiro n. A função deve ler n valores do teclado e retornar quantos destes valores são negativos.
// Faça também um programa principal que leia do teclado o que for necessário para executar a chamada correta desta função e imprimir seu resultado na tela.

#include <stdio.h>

int contarNegativos(int n)
{
	int x, valor, cont = 0;

    while ( x < n)
    {
        printf("Digite o valor %d: ", x + 1); // x é o valor do numero se ele é o primeiro, o segundo ou terceiro
        scanf("%d", &valor); // valor é o que estamos comparando 

        if (valor < 0)
        {
            cont++;
        }
        x++;
    }
    return cont;
}

int main()
{
    int n, negativos;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n); // quantidade de valores que o usuario irá digitar

    negativos = contarNegativos(n);

    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}
