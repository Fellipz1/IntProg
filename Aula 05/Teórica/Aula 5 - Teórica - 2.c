// 2 - O identificador dos parâmetros do exercício 2 (aula passada) foi modificado no código abaixo.

#include <stdio.h>
int calculo (int x, int y)
{
	x=x*10;
	y=y+10;
	
	return (x+y);
}
int main()
{
	int x = 2, y=5;
	printf ("%d %d %d", x, y, calculo(x,y));
	return 0;
}

//Como fica o teste de mesa após esta modificação?
/*
Linha	X	Y	Saída	
08		?	?
10		2	5
02		2	5		
04		20	5	
05		20	15	
11				Imprime 2 5 35
*/
