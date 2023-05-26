// 1- Escreva uma função que receba com parâmetro um número inteiro N e imprima todos os números ímpares de 1 até N.
// dividir o número por dois até chegar no número N, fazendo uma lógica que o cont seja igual a N, vamos fazer cont --, até que cont seja 1. Ele deve imprimir todos os números que %2 !=0.

/*
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
*/

// 2 - 
/*
#include <stdio.h>

int calculoRepPorFaltas()
{
	int alunos;
	float nota;
	int faltas;
	int cont=1; 
	int aprovados=0;

	printf ("Digite o numero de alunos: \n");
	scanf ("%d",&alunos);
	
	while (cont <= alunos)
	{

	printf ("Digite o numero de faltas do aluno %d: \n", cont);
	scanf ("%d",&faltas);

	printf ("Digite a nota do aluno %d: \n", cont);
	scanf ("%f",&nota);

	if( faltas <= 5 && nota>=7)
	{
		aprovados++; 
	}
		cont ++;
	}
	return aprovados;
}

int main ()
{
	int condicao;

	condicao = calculoRepPorFaltas();
	printf ("O numero de alunos aprovados = %d", condicao);

	return 0;
}
*/

// 3 - 

/*
#include <stdio.h>
void parImpar (int x, int y)
{
	int par = 0;
	int impar = 0; 
	int cont=x;

	while(x < y && cont <= y)
	{
		if(cont%2!=0)
		{
			impar ++; 
			cont++;
		}
		else
		{ 
			par ++;
			cont ++; 
		}
	}

	printf ("Numeros impares = %d\n",impar);
	printf ("Numeros pares = %d\n",par);
}

int main()
{
	int x, y;

	printf("Digite um valor para x: ");
	scanf("%d", &x);

	printf("Digite um valor para y: ");
	scanf("%d", &y);

	parImpar(x,y);
	
	return 0;
}
*/

// 4 - 

/*
#include <stdio.h>
	void imprimirResultado(int valor1, int valor2, char operador, int resultado) 
	{
		printf("%d %c %d = %d\n", valor1, operador, valor2, resultado);
	}

int main() 
{
	int valor1, valor2;
	float resultado;
	char operador;

	printf("Digite um caracter: \n");
	scanf("%c", &operador);

	while (operador != 'F')
	{ 
		printf("Digite um valor: \n");
		scanf("%d", &valor1);

		printf("Digite um segundo valor: \n");
		scanf("%d", &valor2);

	switch (operador) 
	{
		case '+':
					resultado = valor1 + valor2;
					imprimirResultado(valor1, valor2, operador, resultado);
					break;
		case '-':
					resultado = valor1 - valor2;
					imprimirResultado(valor1, valor2, operador, resultado);
					break;
		case '*':
					resultado = valor1 * valor2;
					imprimirResultado(valor1, valor2, operador, resultado);
					break;
		case '/':
					if (valor2 == 0) {
					printf("Nao foi possível efetuar a operacao de divisao uma vez que o segundo valor e zero.\n");
					} else {
					resultado = valor1 / valor2;
					imprimirResultado(valor1, valor2, operador, resultado);
					}
					break;
		case '%':
					resultado = valor1 % valor2;
					imprimirResultado(valor1, valor2, operador, resultado);
					break;
		default:
				printf("Operacao invalida. Por favor, tente novamente.\n");
	}
		printf("Digite um caracter, se digitar 'F', para parar o programa: \n");
		scanf(" %c", &operador);
	}
	return 0;
}
*/
