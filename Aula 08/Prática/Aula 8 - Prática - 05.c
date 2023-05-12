// 5 - Escreva uma fun��o que recebe como par�metro um n�mero inteiro n. A fun��o deve ler n valores do teclado e retornar quantos destes valores s�o negativos.
// Fa�a tamb�m um programa principal que leia do teclado o que for necess�rio para executar a chamada correta desta fun��o e imprimir seu resultado na tela.

#include <stdio.h>

int contarNegativos(int n)
{
	int x, valor, cont = 0;

    while ( x < n)
    {
        printf("Digite o valor %d: ", x + 1); // x � o valor do numero se ele � o primeiro, o segundo ou terceiro
        scanf("%d", &valor); // valor � o que estamos comparando 

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
    scanf("%d", &n); // quantidade de valores que o usuario ir� digitar

    negativos = contarNegativos(n);

    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}
