// 1 - Faça uma função que receba dois números X e Y, sendo X < Y. Calcule e imprima:
// – a soma de números pares desse intervalo de números, incluindo os números digitados;
// – a multiplicação de números ímpares desse intervalo, incluindo os digitados;

#include <stdio.h>

void parImpar (int x, int y)
{
    int somaPares = 0;
    int multiplicacaoImpares = 1;
	int i=x;
	
 	for (i = x; i <= y; i++) 
	{
        if (i % 2 == 0) 
		{
            somaPares += i;
        } 
		else 
		{
            multiplicacaoImpares *= i;
        }
    }

    printf("A soma dos numeros pares no intervalo [%d, %d] = %d\n", x, y, somaPares);
    printf("A multiplicacao dos numeros impares no intervalo [%d, %d] = %d\n", x, y, multiplicacaoImpares);
}
int main()
{
	int x, y;

	printf("Digite um valor para x: ");
	scanf("%d", &x);

	printf("Digite um valor para y (maior que x): ");
	scanf("%d", &y);

	parImpar(x,y);
	
	return 0;
}
