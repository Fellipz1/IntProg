// 6- Escreva um programa que leia 10 valores (usando a 
// mesma variável) e encontre o maior e o menor deles. 
// Mostre o resultado.

#include<stdio.h>

void maiorEmenor()
{
	float i, valor, maior, menor;
	
	printf("Digite 10 valores inteiros:\n");
	
	scanf("%f", &valor);
	maior = valor;
	menor = valor;
	
	for (i = 1; i < 10; i++) {
	    scanf("%f", &valor);
	    
	    if (valor > maior) {
	        maior = valor;
	    }
	    
	    if (valor < menor) {
	        menor = valor;
	    }
	}
	
	printf("O maior valor digitado foi: %f\n", maior);
	printf("O menor valor digitado foi: %f\n", menor);
	
}
int main() 
{
	maiorEmenor();
	return 0;
}
