// 9. Construa uma função que aplique um desconto de 25% sobre o preço de um produto recebido como entrada e retorne o valor resultante. 
// Verifique se o programa está correto fazendo o teste de mesa. Use o valor 150.00 como entrada.

#include <math.h>
#include <stdio.h>

float desconto(float a)
{
	float d = a*(0.75);
    return d;
}

int main () 
{
	float a;
	float valor;
	
	printf ("Digite o valor da compra \n");
	scanf ("%f",&a);
	 
	valor = desconto(a);
	printf ("O valor com desconto = %.2f\n",valor);
	 
	return 0;
}

// Resultado
/* Conforme solicitado na questão, segue abaixo o teste com o valor de 150.00
Digite o valor da compra
150.00
O valor com desconto = 112.50

Abaixo segue o teste de mesa
/*
Teste de mesa 
		calculo			main
Linha 	valor		d			a
10		?			?			?	
12      ?         	?			?	
16		150.00		a*(0.75)	150.00
17		150.00		a*(0.75)	150.00
18		112.50		112.50		112.50
19								Imprime 112.50
*/

