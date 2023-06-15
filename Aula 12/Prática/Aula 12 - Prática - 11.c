// 11) Faça um programa que preenche um vetor de inteiros com 
// valores lidos do teclado e uma função que deve verificar se há 
// elementos repetidos no vetor e imprimir os índices de todos os pares 
// de elementos repetidos

#include <stdio.h>
int main() 
{
    int tamanho;
    
    printf("Digite o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	
	int valor[tamanho];
	int i, j;
	
    for ( i = 0; i < tamanho; i++) 
	{
		printf("Digite o valor do vetor \n");
		scanf("%d",&valor[i]);
	}
		for (i = 0; i < tamanho; i++)
		{
			for (j=i+1;j<tamanho;j++)
			{
				if(valor[i]==valor[j])
				{
					printf("O seu vetor %d tem valor repetido com o vetor %d \n",i,j);
				}
			}
		}
     
    return 0;
}
