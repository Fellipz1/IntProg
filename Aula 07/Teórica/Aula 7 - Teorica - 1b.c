// 1) Elabore uma função que receba como parâmetros dois números inteiros e imprima uma mensagem se um for divisível pelo outro.
// Em seguida, faça um programa que leia um número inteiro do teclado e chame a função para verificar se este número é divisível por 2, por 3, por 5 e por 7 (serão 4 chamadas). Faça um teste de mesa com o valor 14.

// Resposta 1 - b

#include <stdio.h>

void verificacaoDivisibilidade (int x, int y)
{
	if ( x % y == 0)
	{
		printf("O numero %d e divisivel por %d\n", x, y);
	}
	else
	{
		printf("O numero %d nao e divisivel por %d\n", x, y);
	}
}
int main()
{
	int x, y;
	
	printf("Digite um valor: \n");
	scanf("%d", &x);
	
	verificacaoDivisibilidade(x,2);
	verificacaoDivisibilidade(x,3);
	verificacaoDivisibilidade(x,5);
	verificacaoDivisibilidade(x,7);
	
	return 0;
}
