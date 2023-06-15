// 10) Faça um programa que preencha um vetor de elementos inteiros 
// com valores lidos do teclado e, uma função que imprima somente 
// valores ímpares armazenados nos índices pares.

#include <stdio.h>
int main() 
{
    int numero;
    int tamanho;
    
    printf("Digite o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	
	int valor[tamanho];
	int i;
	
    for (i = 0; i < tamanho; i++) 
	{
		printf("Digite o valor do vetor %d\n", i);
		scanf("%d",&numero);
		
		if (i%2==0)
		{
			if (numero%2!=0)
			{
				printf("O seu vetor = %d\tImpar = %d \n",i, numero);
			}
		}
		
    }
    
    return 0;
}
