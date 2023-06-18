// 12 - Escreva uma função que recebe um valor N inteiro e positivo e que calcula o valor aproximado
// de PI considerando N termos na equação: PI = 4 ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... )
// A função deve imprimir a expressão (com cada termo utilizado no cálculo) e o resultado obtido.

#include <stdio.h>

float calculaPI(int N) {
    float pi = 0.0;
    int sinal = -1;
    int i;

    if (N <= 0) {
        printf("Digite um valor inteiro positivo.\n");
        return pi;
    }

    printf("Termos utilizados:\n");

    for (i = 0; i < N; i++) {
        int divisor = 2 * i + 1;
        float termo = 1.0 / divisor * sinal;
        pi += termo;
        sinal *= -1;
        printf("%s (%.2f/%d) ", (i == 0 ? "4 * " : (sinal > 0 ? "+" : "-")), 1.0, divisor);
    }

    return 4 * (-pi);
}

int main() {
    int N;
    float resultado;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &N);

    resultado = calculaPI(N);

    printf("\nResultado obtido: %.6f\n", resultado);

    return 0;
}
