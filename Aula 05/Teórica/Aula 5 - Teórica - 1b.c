// 1b - Faça um programa em C (função principal) que leia dois inteiros do teclado e chame a função da letra a).

#include <stdio.h>

void num1b(int num1, int num2);

int main() 
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um segundo valor: ");
    scanf("%d", &num2);

    num1b(num1, num2);

    return 0;
}

void num1b(int num1, int num2) 
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
