// Quest�o 5
// Fa�a um programa que leia um vetor de n�meros inteiros de 7 posi��es, calcule e imprima a m�dia dos elementos desse vetor.

#include <stdio.h>

int main() {
    int vetor[7];
    int soma = 0;
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 7; i++) 
	{
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 7; i++) 
	{
        soma += vetor[i];
    }
    
    float media = (float)soma / 7;
    printf("A media dos elementos do vetor = %.2f\n", media);
    
    return 0;
}
