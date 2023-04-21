// 1a - Escreva uma função que recebe dois números inteiros e imprime a soma, o produto, a diferença, o quociente e o resto entre esses dois números.
/*
#include <stdio.h>

void num1a(int num1, int num2) 
{
    int soma = num1 + num2;
    int produto = num1 * num2;
    int diferenca = num1 - num2;
    int quociente = num1 / num2;
    int resto = num1 % num2;

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Diferenca: %d\n", diferenca);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
}

int main() 
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um segundo valor: ");
    scanf("%d", &num2);

    num1a(num1, num2);

    return 0;
}
*/

// 1b - Faça um programa em C (função principal) que leia dois inteiros do teclado e chame a função da letra a).
/*
#include <stdio.h>

void num1b(int num1, int num2);

int main() 
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um segundo valor: ");
    scanf("%d", &num2);

    num1b(num1, num2);

    return 0;
}

void num1b(int num1, int num2) 
{
    int soma = num1 + num2;
    int produto = num1 * num2;
    int diferenca = num1 - num2;
    int quociente = num1 / num2;
    int resto = num1 % num2;

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Diferenca: %d\n", diferenca);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
}
*/

// 1c - Teste seu programa com os valores 11 e 3.
/*
Retorno do terminal 
Digite um valor: 11
Digite um segundo valor: 3
Soma: 14
Produto: 33
Diferenca: 8
Quociente: 3
Resto: 2
*/

// 2 - O identificador dos parâmetros do exercício 2 (aula passada) foi modificado no código abaixo.
/* 
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
*/
//Como fica o teste de mesa após esta modificação?
/*
Linha	X	Y	Saída	
08		?	?
10		2	5
02		2	5		
04		20	5	
05		20	15	
11				Imprime 2 5 35


*/

// 3 
/*
3 - a) Considerando Pi = 3,14159, para cada opção abaixo, escreva uma função que recebe como parâmetro o raio de um círculo e:
retorne seu diâmetro;
retorne sua circunferência;
retorne sua área;
imprima o diâmetro, a circunferência e a área chamando as funções três anteriores.
3 - b) Elabore um programa que leia do teclado o valor do raio de dois círculos e, para
cada círculo, chame a função que imprime as informações.
3 - c) Teste seu programa com os valores 1 e 3.
*/
// 3a
/*
#include <stdio.h>

#define PI 3.14159

float q3D(float raio) 
{
    return 2 * raio;
}

float q3C(float raio) 
{
    return 2 * PI * raio;
}

float q3A(float raio) 
{
    return PI * raio * raio;
}

void q3dca(float raio) 
{
    float diametro = q3D(raio);
    float circunferencia = q3C(raio);
    float area = q3A(raio);

    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f\n", area);
}

int main() 
{
    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    q3dca(raio);

    return 0;
}
*/

// 3b
/*
#include <stdio.h>

#define PI 3.14159

float q3Db(float r)
{
    return 2 * r;
}

float q3Cb(float r) 
{
    return 2 * PI * r;
}

float q3Ab(float r) 
{
    return PI * r * r;
}

void q3b(float r) 
{
    float diametro = q3Db(r);
    float circunferencia = q3Cb(r);
    float area = q3Ab(r);

    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f\n", area);
}

int main() 
{
    float r1, r2;

    printf("Digite o valor do raio do primeiro circulo: ");
    scanf("%f", &r1);
    q3b(r1);

    printf("Digite o valor do raio do segundo circulo: ");
    scanf("%f", &r2);
    q3b(r2);

    return 0;
}
*/

// 3c - Testando o programa com os valores 1 e 3.
/*
Digite o valor do raio do primeiro circulo: 1
Diametro: 2.00
Circunferencia: 6.28
Area: 3.14
Digite o valor do raio do segundo circulo: 3
Diametro: 6.00
Circunferencia: 18.85
Area: 28.27
*/

// 4 - Faça o teste de mesa
/*
#include <stdio.h>
int funcao1 (int a){
	int b = 0;
	printf ("a%d%d", a, b);
	b = a * a * a;
	printf ("b%d%d", a, b);
	return b/2;
	printf ("c%d%d", a, b);
}
void funcao2 (){
	int a = funcao1 (3),b = 2;
	printf ("d%d%d", a, b);
	a = a + funcao1(b);
	printf ("e%d%d", a, b);
	return;
	printf ("f%d%d", a, b);
}
int main (){
	int a=3, b=5;
	printf ("g%d%d", a, funcao1(1));
	funcao2 ();
	printf ("h%d%d", a, b);
	return 0;
}
*/

/*
Linha	a		b
18		?		?
19		3		5	
02 		1		5
03		1		0	
04		1		1	
05		1		1
06		1		1		
07		1		0
22		?		?
10		?		?
11		13		2
12		13		2
13		17		2
14		17		2
23		17		2

