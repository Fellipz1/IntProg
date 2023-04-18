// Aluno: Fellipe de Sá Moraes
// Aula 4 Prática  Data: 13/04/2023
// 4 a 
/*
#include <stdio.h>

float SomaDeReaisESuaMedia(float a, float b, float c) 
{
    float m = a/3 + b/3 + c/3; 
    return m;
}
*/

// 4b
/*
#include <stdio.h>

float SomaDeReaisESuaMedia(float a, float b, float c) 
{
    float m = a/3 + b/3 + c/3; 
    return m;
}
int main() 
{
    float a, b, c;
    float m; 
    
    printf("Digite tres valores pertencentes ao campos dos reais\n");

	printf("Valor 1:\n");
    scanf("%f", &a);

	printf("Valor 2:\n");
    scanf("%f", &b);
    
	printf("Valor 3:\n");
    scanf("%f", &c);
    
    m = SomaDeReaisESuaMedia(a,b,c);

    printf("Media dos tres valores = %f\n", m);

    return 0;
}
*/

//4c
// O teste deu certo como podemos ver pelo resultado do terminal abaixo 
/* Digite tres valores pertencentes ao campos dos reais
Valor 1:
2
Valor 2:
6
Valor 3:
7
Media dos tres valores = 5.000000
*/

//5
/*
#include <stdio.h>
#include <math.h>

int main()
{
	double f;
	scanf("%lf", &f);
	printf("%.2lf", fabs(f));
	return 0;
}
*/
//Resultado: -75
// 75.00, verificasse que o código está funcionando, uma vez que ao escrever um número negativo o programa retorna um número positivo, como o módulo faz

//6
/*
#include <stdio.h>

int potencia(int base, int expoente) 
{
    int resultado = 1;
    for (int i = 1; i <= expoente; i++) 
	{
		resultado *= base;
    }
    return resultado;
}

int main() {
    int base = 3;
    int expoente = 4;
    int resultado = potencia(base, expoente);
    printf("%d elevado a %d = %d\n", base, expoente, resultado);
    return 0;
}
*/
// Resultado: O terminal retornou o esperado, como podemos ver 3 elevado a 4 = 81.

//7
/*
#include <math.h>
#include <stdio.h>

int diferenca_quadrado(int a, int b) 
{
    int dif = a - b;
    int dif_quadrado = pow(dif, 2);
    return dif_quadrado;
}

int main() 
{
    int a, b;
    int dif_quadrado;
    int dif;
    int valor;
    
    printf("Digite dois valores para calucular a diferenca entre eles ao quadrado:\n");

	printf("Valor 1:\n");
    scanf("%d", &a);

	printf("Valor 2:\n");
    scanf("%d", &b);

	valor = diferenca_quadrado(a, b); 

    printf("A diferenca dos valores ao quadrado = %d\n", valor);

    return 0;
}
*/
// Resultado: Digite dois valores para calucular a diferenca entre eles ao quadrado:
/*O terminal nos mostra o seguinte:
Valor 1:
5
Valor 2:
3
A diferenca dos valores ao quadrado = 4
Isso está correto, uma vez que 5-3=2 e 2² = 4.
*/

//8
/*
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
*/
// Resultado
/* Conforme solicitado
Digite o valor do seu salario
800
Voce recebe 0.606061
Digite o valor do seu salario
2030.40
Voce recebe 1.538182
*/

//9
/*
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
*/
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

