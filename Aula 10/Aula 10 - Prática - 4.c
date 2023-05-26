// 4 - 

#include <stdio.h>
	void imprimirResultado(int valor1, int valor2, char operador, int resultado) 
	{
		printf("%d %c %d = %d\n", valor1, operador, valor2, resultado);
	}

int main() 
{
	int valor1, valor2;
	float resultado;
	char operador;

	printf("Digite um caracter: \n");
	scanf("%c", &operador);

	while (operador != 'F')
	{ 
		printf("Digite um valor: \n");
		scanf("%d", &valor1);

		printf("Digite um segundo valor: \n");
		scanf("%d", &valor2);

	switch (operador) 
	{
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
		case '%':
					resultado = valor1 % valor2;
					imprimirResultado(valor1, valor2, operador, resultado);
					break;
		default:
				printf("Operacao invalida. Por favor, tente novamente.\n");
	}
		printf("Digite um caracter, se digitar 'F', para parar o programa: \n");
		scanf(" %c", &operador);
	}
	return 0;
}
