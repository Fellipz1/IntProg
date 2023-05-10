// c) Reescreva o programa para que ele imprima a tabuada de todo valor inteiro que o usuário digitar. O programa deverá ser encerrado quando o usuário digitar o valor zero.

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
        printf("Digite um valor inteiro (ou 0 para sair): ");
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        tabuada(valor);
    }
    return 0;
}
