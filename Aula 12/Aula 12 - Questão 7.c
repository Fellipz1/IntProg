// Questão 7


#include <stdio.h>
#define TAM_VET_A 2
#define TAM_VET_B 5 
void espelhaVetor(int vet[], int tam)
{
	for (int i=0;i<(tam/2);i++)
	vet[(tam-1)-i]=vet[i];
}
void imprimeVetor (int vet[], int tam)
{
	for (int i=0;i<tam;i++)
	printf("v[%d]=>%d\n", i, vet[i]);
	printf("-----------\n");
}
int main ()
{
	int vetorA[TAM_VET_A]={1,2};
	int vetorB[TAM_VET_B]={3,4,5,6,7};
	imprimeVetor(vetorA, TAM_VET_A);
	imprimeVetor(vetorB, TAM_VET_B);
	espelhaVetor(vetorA, TAM_VET_A);
	espelhaVetor(vetorB, TAM_VET_B);
	return 0;
}

-Aqui está o resultado 
v[0]=>1
v[1]=>2
-----------
v[0]=>3
v[1]=>4
v[2]=>5
v[3]=>6
v[4]=>7
-----------

