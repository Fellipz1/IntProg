// b) Fa�a um programa que leia um valor inteiro do teclado e use a fun��o da letra a para imprimir a tabuada deste n�mero.

#include <stdio.h>

void tabuada(int n) {
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    tabuada(valor);
    return 0;
}
