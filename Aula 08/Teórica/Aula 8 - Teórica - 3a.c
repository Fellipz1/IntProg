// 3 - a) Escreva uma fun��o que recebe um n�mero inteiro n como par�metro e imprime a tabuada de n. Por exemplo, se n for 3, a fun��o deve imprimir as linhas do quadro � direita.

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
