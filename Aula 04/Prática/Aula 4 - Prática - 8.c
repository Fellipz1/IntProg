// 8. Fa�a uma fun��o que receba o valor lido de sal�rio m�nimo e o sal�rio de um funcion�rio. A fun��o deve calcular e retornar quantos sal�rios m�nimos esse funcion�rio ganha.
// Ap�s fazer o programa, verifique se seu programa est� correto imprimindo a quantidade de sal�rio m�nimos lendo as entradas 800.00 e 2030.40.

#include <math.h>
#include <stdio.h>

float calculoSalarioMin(float a)
{
	float b=1320;
	float qsm= a/b;
    return qsm;
}

int main () 
{
	float a;
	float valor;
	
	printf ("Digite o valor do seu salario \n");
	scanf ("%f",&a);
	 
	valor = calculoSalarioMin(a);
	printf ("Voce recebe %f", valor);
	 
	return 0;
}

// Resultado
/* Conforme solicitado
Digite o valor do seu salario
800
Voce recebe 0.606061
Digite o valor do seu salario
2030.40
Voce recebe 1.538182
*/
