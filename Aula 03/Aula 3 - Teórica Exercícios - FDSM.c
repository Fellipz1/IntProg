// 1 -
/*
#include <stdio.h>

int main() 
{
   float raio, altura, pi, volume;

   raio = 3; //6/2 diametro/2 = raio, o raio é metade do diâmetro
   altura = 12;
   pi = 3.1415;
   
   volume = pi * raio * raio * altura; // fórmula do volume do cilindro

   printf("O volume do copo: %.2f cm³\n", volume); // o .2 é para a quantidade de casas decimais, teremos duas casas decimais

   return 0;
}
*/

// 2 -
/*
#include <stdio.h>

int main() {
   int segundos, minutos, horas, dias;

   segundos = 200000;
   minutos = segundos / 60;
   segundos = segundos % 60;
   horas = minutos / 60;
   minutos = minutos % 60;
   dias = horas / 24;
   horas = horas % 24;

   printf("200.000 segundos equivalem a \n%d dias.\n%d horas.\n%d minutos.\n%d segundos.\n", dias, horas, minutos, segundos);

   return 0;
}
*/

// 3 -
/*
#include <stdio.h>

int main() 
{
	int x, d, t, q;
	
	// comentários
	// x é o valor que o usuario vai digitar para fazermos as operações necessárias
	// d é o valor ao dobro 
	// t é o valor ao triplo 
	// q é o x ao quadrado
	
	x = 4; 
	d = 2 * x;
	t = 3 * x;
	q = x * x;
	
	printf("O dobro de x: %d\n", d);
	printf("O triplo de x: %d\n", t);
	printf("O quadrado de x: %d\n", q);

	return 0;
}
*/

// 4 - 
/*
#include <stdio.h>

int main() 
{
	int x, d, t, q;
	
	// comentários
	// x é o valor que o usuario vai digitar para fazermos as operações necessárias
	// d é o valor ao dobro 
	// t é o valor ao triplo 
	// q é o x ao quadrado
	
	printf("Digite um valor para x: ");
	scanf("%d", &x);

	d = 2 * x;
	t = 3 * x;
	q = x * x;
	
	printf("O dobro de x: %d\n", d);
	printf("O triplo de x: %d\n", t);
	printf("O quadrado de x: %d\n", q);

	return 0;
}
*/
