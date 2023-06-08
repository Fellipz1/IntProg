// Questão 4 
// Faça um programa que inicialize um vetor de 20 posições com os primeiros 20 números ímpares e imprima esse vetor.

#include <stdio.h>

int main() {
    int vetor[20];
    int numero = 1;
    
    printf("Valor\t \t Numero impar correspondente\n");
    for (int i = 0; i < 20; i++) 
	{
        vetor[i] = numero;
        numero += 2;
    }
    for (int i = 0; i < 20; i++) 
	{
        printf("%d \t \t %d \n",i, vetor[i]);
    }
    
    return 0;
}
