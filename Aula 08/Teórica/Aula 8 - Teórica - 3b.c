// b) Faça um programa que leia um valor inteiro do teclado e use a função da letra a para imprimir a tabuada deste número.

#include <stdio.h>

void tabuada(int n) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
int main() {
    int valor;
    while (1) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);
        tabuada(valor);
        break;
    }
    return 0;
}
