//1 
/*
Linha	a		b			c		d		r1		r2
1						
2		1.0		- 2.0		1.0			
3		1.0		- 2.0		1.0			
4		1.0		- 2.0		1.0		0		?		?
5		1.0		- 2.0		1.0		1.0		1.0		1.0
6		1.0		- 2.0		1.0		1.0		1.0		1.0
7		1.0		- 2.0		1.0		1.0		1.0		1.0
										Imprime os valores de 1.0 e 1.0		
*/

// 2a)
/*
#include <stdio.h>
//nesse código utilizaremos a = área e r = raio
float calculandoAreaDoCirculo(float r) 
{
    float a = 3.14159*r*r; 
    return a;
}
*/
// 2b)
/*
#include <stdio.h>
//nesse código utilizaremos a = área e r = raio
float calculandoAreaDoCirculo(float r) 
{
    float a = 3.14159*r*r; 
    return a;
}

int main() {
    float r, a;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    a = calculandoAreaDoCirculo(r);

    printf("Area do circulo = %f\n", a);

    return 0;
}
*/

// 3
// Faça o teste de mesa no código abaixo
/*
#include <stdio.h>
int calculo (int p, int q)
{
	p = p * 10;
	q = q + 10;
	return (p + q);
}
int main ()
{
	int x = 2, y = 5;
	printf ("%d %d %d", x,y,calculo(x,y));
	return 0;
}
*/

//O teste de mesa fica da seguinte forma
/*
		Main		Calculo		
Linha	x	y		p	q	p+q
10		2	5		?	?	
4					20	?	
5					20	15	
6					20	15	35
12		2	5				35
						Imprime os valores 2, 5 e 35	
		
*/

// 4)a)
/*
#include <stdio.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2) 
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // d=distancia
    return d;
}
*/

// 4)b)
/*
#include <stdio.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2) 
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // d=distancia
    return d;
}
int main() 
{
    float x1, y1, x2, y2, x3, y3;
    float d1, d2, d3;
    float perimetro;

    printf("Entre com as coordenadas dos tres vertices do triangulo:\n");

    printf("Vertice 1:\n");
    scanf("%f %f", &x1, &y1);

    printf("Vertice 2:\n");
    scanf("%f %f", &x2, &y2);

    printf("Vertice 3:\n");
    scanf("%f %f", &x3, &y3);

    d1 = calcular_distancia(x1, y1, x2, y2);
    d2 = calcular_distancia(x2, y2, x3, y3);
    d3 = calcular_distancia(x3, y3, x1, y1);

    perimetro = d1 + d2 + d3;

    printf("O perimetro do triangulo= %f\n", perimetro);

    return 0;
}
*/
