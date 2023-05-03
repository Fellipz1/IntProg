// 1) Elabore uma fun��o que receba como par�metros dois n�meros inteiros e imprima uma mensagem se um for divis�vel pelo outro.
// Em seguida, fa�a um programa que leia um n�mero inteiro do teclado e chame a fun��o para verificar se este n�mero � divis�vel por 2, por 3, por 5 e por 7 (ser�o 4 chamadas). Fa�a um teste de mesa com o valor 14.

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
