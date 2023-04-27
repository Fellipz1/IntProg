// 6 - Fa�a as fun��es imprimeDivisaoInteira e imprimeDivisaoReal que recebem dois n�meros inteiros e imprimem o resultado da divis�o do primeiro n�mero pelo segundo.
// Se n�o for poss�vel fazer a divis�o (se o segundo valor for igual a zero), imprima uma mensagem informando o problema.
// Fa�a um programa para chamar as fun��es e teste ambas usando como entrada os valores 9 e 4.


#include <stdio.h>

void imprimeDivisaoInteira(int x, int y) {
    if (y == 0) {
    	printf("Nao e possivel fazer a divisao, o segundo valor e igual a zero.\n");
    } else {
        printf("%d dividido por %d e igual a %d\n", x, y, x / y);
    }
}

void imprimeDivisaoReal(int x, int y) {
    if (y == 0) {
        printf("Nao e poss�vel fazer a divis�o, o segundo valor e igual a zero.\n");
    } else {
        printf("%d dividido por %d e igual a %.2f\n", x, y, (float) x / y);
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    imprimeDivisaoInteira(num1, num2);
    imprimeDivisaoReal(num1, num2);

    return 0;
}


/*
// Teste pedido com 9 e 4 
Digite o primeiro valor: 9
Digite o segundo valor: 4
9 dividido por 4 e igual a 2
9 dividido por 4 e igual a 2.25
*/

