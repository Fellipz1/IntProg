// 3  - Elabore um programa completo que imprima o dobro, o triplo e o quadrado do valor x. O valor de x pode ser escolhido por voc� ao inicializar a vari�vel. Supondo que o valor de x � 3, a sa�da de seu programa deve ser:
// Use vari�veis para armazenar os valores num�ricos que dever�o ser impressos.

#include <stdio.h>

int main() 
{
	int x, d, t, q;
	
	// coment�rios
	// x � o valor que o usuario vai digitar para fazermos as opera��es necess�rias
	// d � o valor ao dobro 
	// t � o valor ao triplo 
	// q � o x ao quadrado
	
	x = 4; 
	d = 2 * x;
	t = 3 * x;
	q = x * x;
	
	printf("O dobro de x: %d\n", d);
	printf("O triplo de x: %d\n", t);
	printf("O quadrado de x: %d\n", q);

	return 0;
}
