// Quest�o 6
// Fa�a um programa que leia um vetor de n�meros reais de 5 posi��es, e fun��o que receba essa vetor, calcule e imprima a soma dos elementos desse vetor.

#include <stdio.h>

float calcularSoma(float vetor[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    float vetor[5];
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 5; i++) 
	{
        scanf("%f", &vetor[i]);
    }
    
    float soma = calcularSoma(vetor, 5);
    
    printf("A soma dos elementos do vetor = %.2f\n", soma);
    
    return 0;
}
