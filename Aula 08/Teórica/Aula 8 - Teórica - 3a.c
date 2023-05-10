// 3 - a) Escreva uma função que recebe um número inteiro n como parâmetro e imprime a tabuada de n. Por exemplo, se n for 3, a função deve imprimir as linhas do quadro à direita.

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
