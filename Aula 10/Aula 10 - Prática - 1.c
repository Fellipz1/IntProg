// 1- Escreva uma fun��o que receba com par�metro um n�mero inteiro N e imprima todos os n�meros �mpares de 1 at� N.
// dividir o n�mero por dois at� chegar no n�mero N, fazendo uma l�gica que o cont seja igual a N, vamos fazer cont --, at� que cont seja 1. Ele deve imprimir todos os n�meros que %2 !=0.

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

