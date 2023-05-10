// c) Reescreva o programa para que ele imprima a tabuada de todo valor inteiro que o usuário digitar. O programa deverá ser encerrado quando o usuário digitar o valor zero.

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
    while (1) {
        printf("Digite um valor inteiro (ou 0 para sair): ");
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        tabuada(valor);
    }
    return 0;
}
