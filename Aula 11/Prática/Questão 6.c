// 6- Escreva um programa que leia 10 valores (usando a 
// mesma variável) e encontre o maior e o menor deles. 
// Mostre o resultado.

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
