// Questão 8

#include<stdio.h>
#define TAM 3
void funcao(int v[], int tam)
{
	for (int i=0;i<tam;i++)
	{
		printf("b %d", v[i]);
		if (v[i]>tam)
			return i+1;
		else
		v[i]=v[i]*v[i];
	}
	return tam;
}
int main ()
{
	int r=TAM, vet[TAM]={2, 1, 3};
	while (r==TAM)
	{
		r=funcao(vet, TAM);
		printf("v %d",r);
	}
	return 0;
}

// Esse código nem roda, tem retorno na void então não fiz.
