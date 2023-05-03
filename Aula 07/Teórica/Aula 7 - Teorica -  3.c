// 3 -  Faça um programa para ler dois números e um caractere: ' + ', ' - ', ' * ' e ' / '. O programa deve imprimir o resultado da operação efetuada sobre os números lidos. Teste com 3.6, 4 e ' / '.
// Caso queira pode fazer uma função imprimir os resultados das operações realizadas.
// DESAFIO: Teste com 7.8, 0.0 e ' / ' e corrija seu programa para imprimir uma mensagem caso não seja possível efetuar um cálculo.

#include <stdio.h>

void imprimirResultado(float valor1, float valor2, char operador, float resultado) {
    printf("%.2f %c %.2f = %.2f\n", valor1, operador, valor2, resultado);
}

int main() {
    float valor1, valor2, resultado;
    char operador;

	printf("Digite um caracter: \n");
	scanf("%c", &operador);
	
	printf("Digite um valor: \n");
	scanf("%f", &valor1);
	
	printf("Digite um segundo valor: \n");
	scanf("%f", &valor2);


    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            imprimirResultado(valor1, valor2, operador, resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            imprimirResultado(valor1, valor2, operador, resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            imprimirResultado(valor1, valor2, operador, resultado);
            break;
        case '/':
            if (valor2 == 0) {
                printf("Nao foi possível efetuar a operacao de divisao uma vez que o segundo valor e zero.\n");
            } else {
                resultado = valor1 / valor2;
                imprimirResultado(valor1, valor2, operador, resultado);
            }
            break;
        default:
            printf("Operacao invalida. Por favor, tente novamente.\n");
    }

    return 0;
}
