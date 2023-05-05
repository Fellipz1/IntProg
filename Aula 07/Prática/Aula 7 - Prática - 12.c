// 12 - Elabore um algoritmo que leia dois valores do usu�rio e a opera��o que ele deseja executar (Opera��es: soma, subtra��o, divis�o, multiplica��o).
// Execute a opera��o desejada e imprima na tela.

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
                printf("Nao foi poss�vel efetuar a operacao de divisao uma vez que o segundo valor e zero.\n");
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
