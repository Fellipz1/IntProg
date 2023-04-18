// 5 - Escreva uma função que calcula o módulo de um número e o retorna.

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
// 75.00, verificasse que o código está funcionando, uma vez que ao escrever um número negativo o programa retorna um número positivo, como o módulo faz

