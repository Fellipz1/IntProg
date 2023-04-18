// 4 - Elabore um programa completo que imprima o dobro, o triplo e o quadrado do valor x. O valor de x deve ser digitado pelo usuário e lido. Supondo que o valor de x é 3, a saída de seu programa deve ser:
// Use variáveis para armazenar os valores numéricos que deverão ser impressos. 

#include <stdio.h>

int main() 
{
	int x, d, t, q;
	
	// comentários
	// x é o valor que o usuario vai digitar para fazermos as operações necessárias
	// d é o valor ao dobro 
	// t é o valor ao triplo 
	// q é o x ao quadrado
	
	printf("Digite um valor para x: ");
	scanf("%d", &x);

	d = 2 * x;
	t = 3 * x;
	q = x * x;
	
	printf("O dobro de x: %d\n", d);
	printf("O triplo de x: %d\n", t);
	printf("O quadrado de x: %d\n", q);

	return 0;
}
