// 2 - O identificador dos par�metros do exerc�cio 2 (aula passada) foi modificado no c�digo abaixo.

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

//Como fica o teste de mesa ap�s esta modifica��o?
/*
Linha	X	Y	Sa�da	
08		?	?
10		2	5
02		2	5		
04		20	5	
05		20	15	
11				Imprime 2 5 35
*/
