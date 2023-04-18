// 1a - Escreva uma função que recebe dois números inteiros e imprime a soma, o produto, a diferença, o quociente e o resto entre esses dois números.

#include <stdio.h>

void num1a(int num1, int num2) 
{
    int soma = num1 + num2;
    int produto = num1 * num2;
    int diferenca = num1 - num2;
    int quociente = num1 / num2;
    int resto = num1 % num2;

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Diferenca: %d\n", diferenca);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
}

int main() 
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um segundo valor: ");
    scanf("%d", &num2);

    num1a(num1, num2);

    return 0;
}
