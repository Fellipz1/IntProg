// 5 - Escreva uma fun��o que calcula o m�dulo de um n�mero e o retorna.

#include <stdio.h>
#include <math.h>

int main()
{
	double f;
	scanf("%lf", &f);
	printf("%.2lf", fabs(f));
	return 0;
}

//Resultado: -75
// 75.00, verificasse que o c�digo est� funcionando, uma vez que ao escrever um n�mero negativo o programa retorna um n�mero positivo, como o m�dulo faz

