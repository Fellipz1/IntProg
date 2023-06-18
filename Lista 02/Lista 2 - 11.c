// 11 - Escreva uma função que recebe um valor N inteiro e positivo e que retorna a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
// A função deve imprimir cada termo gerado e o valor final de S.

#include <stdio.h>

float calcularSoma(int n) {
	int i;
    float soma = 0.0;

    if (n <= 0) {
        printf("Digite um valor inteiro positivo.\n");
        return soma;
    }

    printf("Termos gerados:\n");
    for (i = 1; i <= n; i++) {
        float termo = 1.0 / i;
        soma += termo;
        printf("1/%d = %.2f\n", i, termo);
    }

    return soma;
}

int main() {
    int n;
    float resultado;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    resultado = calcularSoma(n);

    printf("Valor final da soma = %.2f\n", resultado);

    return 0;
}
