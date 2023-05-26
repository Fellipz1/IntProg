// 1- Escreva uma função que receba com parâmetro um número inteiro N e imprima todos os números ímpares de 1 até N.
// dividir o número por dois até chegar no número N, fazendo uma lógica que o cont seja igual a N, vamos fazer cont --, até que cont seja 1. Ele deve imprimir todos os números que %2 !=0.

# include <stdio.h>
void impar_ate_N (int numero)
{
	int cont=1;

	while (cont<=numero)
	{
		if(cont%2!=0)
		{
			printf("\n%d ", cont);
			cont++;
		}
		else 
		{
			cont ++; 
		}
	}
}
int main ()
{
	int numero;

	printf("Digite um numero inteiro: \n");
	scanf("%d",&numero);

	impar_ate_N (numero);

	return 0;
}

