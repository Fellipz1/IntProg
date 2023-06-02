// 4- Chico tem 1,50 metro e cresce 2 centímetros por ano, 
// enquanto Zé tem 1,40 metro e cresce 3 centímetros por 
// ano. Construa um programa que calcule e imprima 
// quantos anos serão necessários para que Zé seja maior 
// que Chico. Use o comando do-while.

/*
#include <stdio.h>
void diferencaDeAltura ()
{
	int anos,cont;
	int alturaZe, alturaChico, newalturaChico, newalturaZe;
	
	printf ("Digite qual a altura em centimetros de Chico: \n");
	scanf("%d",&alturaChico);
	printf ("Digite qual a altura em centimetros de Ze: \n");
	scanf("%d",&alturaZe);
	
	cont = 1;
	anos = 1;
		
	do 
	{
		newalturaChico = alturaChico+(2*anos);
		newalturaZe = alturaZe+(3*anos);
		cont++;
		anos++;
		
	}while(newalturaChico>newalturaZe);
	printf("Foram necessarios %d anos para Ze ficar maior que Chico",anos);
}

int main ()
{
	diferencaDeAltura ();
	return 0;
}
*/

// 5- Escrever um função que lê um valor N inteiro e positivo 
// e que calcula e escreve o valor de E. Faça um programa 
// para testar sua função. E = 1 + 1/2 + 1/3 + ... + 1/N

/*
#include <stdio.h>
float soma()
{
	int n, i;
	float soma;
	
	printf("Digite um valor inteiro positivo: \n");
	scanf("%d",&n);
	i=0;
	if(n<0 && n==0)
	{
		printf("Digite um valor valido");
	}
	else 
	{
		do 
		{
		soma += (float) 1/n;
			
		n--;
		
		}while(n>i);	
	}
	return soma;
}
int main()
{
	float valores;
	valores = soma();
	printf("A soma = %.2f", valores);
	return 0; 
}
*/

// 6- Escreva um programa que leia 10 valores (usando a 
// mesma variável) e encontre o maior e o menor deles. 
// Mostre o resultado.

/*
#include<stdio.h>

void maiorEmenor()
{
	int i, valor, maior, menor;
	
	printf("Digite 10 valores inteiros:\n");
	
	scanf("%d", &valor);
	maior = valor;
	menor = valor;
	
	for (i = 1; i < 10; i++) {
	    scanf("%d", &valor);
	    
	    if (valor > maior) {
	        maior = valor;
	    }
	    
	    if (valor < menor) {
	        menor = valor;
	    }
	}
	
	printf("O maior valor digitado foi: %d\n", maior);
	printf("O menor valor digitado foi: %d\n", menor);
	
}
int main() 
{
	maiorEmenor();
	return 0;
}
*/

// 7- Usando uma função que converta graus Fahrenheit em 
// Celsius (fórmula C=5*(F – 32)/9 ), escreva um programa 
// que construa uma tabela de graus Celsius em função de 
// Fahrenheit, de 50oF a 150oF, variando de 1 em 1. Use o 
// comando for.

/*
#include<stdio.h>

float converterParaCelsius(float fahrenheit) {
    float celsius = 5 * (fahrenheit - 32) / 9;
    return celsius;
}

int main() {
    int fahrenheit;
    
    printf("Conversao de Fahrenheit para Celsius:\n");
    
    for (fahrenheit = 50; fahrenheit <= 150; fahrenheit++) {
        float celsius = converterParaCelsius(fahrenheit);
        printf("Graus Fahrenheit = %d \nAbaixo o equivalente em Celsius\nGraus Celsius = %.2f\n \n", fahrenheit, celsius);
    }
    
    return 0;
}
*/

// 8- Faça um programa que leia um inteiro positivo 
// x e imprima todas as potências de 2 no intervalo 
// entre 0 e x. Use uma variável acumuladora para 
// calcular a potência de 2.
// Teste seu programa com o valor: 21

/*
#include <stdio.h>
#include <math.h>

void potenciasDe2 ()
{
	int x;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    
    printf("Potencias de 2 de 0 ate %d:\n", x);
    if(x<0 || x==0)
	{
		printf("Valor invalido, por favor, digite um valor valido.\n");
	}
	else 
	{
    	int i;
    	for (i = 0; i <= x; i++) {
	        int potencia = pow(2, i);
	        printf("O valor da potencia de 2 elevado %d = %d\n", i, potencia);
    	}
	}
}
int main() {
    potenciasDe2 ();
    return 0;
}
*/
