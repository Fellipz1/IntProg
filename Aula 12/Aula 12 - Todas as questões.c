// Exerc�cios 
// Quest�o 1 
// vet |1|2|4|7|4|2|8|9|0|6|5|4|3|
// Quais s�o os elementos do vetor referenciados por: vet[3]? vet[0]? vet[13]
// Resposta vet[3]= 7 ; vet[0]= 1 ; vet[13]= n�o existe no vetor proposto pelo exerc�cio;

// Quest�o 2 
// Quais as modifica��es feitas no vetor em:
// vet[1]=vet[3]*vet[1] = Nesse caso, o vetor na posi��o 3 do vetor � mulltiplicado pelo vaolor do elemento na posi��o 1, o resultado da opera��o fica armazenado na posi��o 1 do vetor. N�o falando em vetor temos nosso quarto valor sendo multiplicado pelo segundo e o resultado sendo o novo valor do segundo n�mero digitado pelo usuario.
// vet[10]=pow(vet[2],2)+vet[0] = Aqui o vetor do elemento na posi��o 2 do vetor � elevado ao quadrado usando a fun��o pow, ap�s isso o resultado � somado ao valor do elemento na posi��o 0 do vetor, o resultado final � atribu�do � posi��o 10 do vetor.
// vet[9]=vet[3]<vet[4] = Nesse temos a express�o vet[3]<vet[4] sendo avaliada. Se o valor do vet[3] for menor que o de vet[4], temos um resultado 1(verdadeiro), se n�o temos ent�o um resultado 0 (negativo), o resultado � atribuido � posi��o 9 do vetor.
// vet[6]=vet[vet[5]] = Aqui, o valor do elemento na posi��o 5 do vetor � usado como �ndice para acessar o valor correspondente no vetor. Esse valor resultante � ent�o atribu�do ao vetor de posi��o 6.

// Quest�o 3 
// Qual � a diferen�a entre os n�meros "3" das duas instru��es abaixo?
// int vet[3]; -> Aqui declaramos que teremos e elementos no vetor que estamos declarando.
// vet[3]=5; -> Aqui estamos alterando o valor do nosso quarto vetor.

// Quest�o 4 
// Fa�a um programa que inicialize um vetor de 20 posi��es com os primeiros 20 n�meros �mpares e imprima esse vetor.

/*
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
*/

// Quest�o 5
// Fa�a um programa que leia um vetor de n�meros inteiros de 7 posi��es, calcule e imprima a m�dia dos elementos desse vetor.

/*
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
*/

// Quest�o 6
// Fa�a um programa que leia um vetor de n�meros reais de 5 posi��es, e fun��o que receba essa vetor, calcule e imprima a soma dos elementos desse vetor.

/*
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
*/

// Quest�o 7

/*
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

-Aqui est� o resultado 
v[0]=>1
v[1]=>2
-----------
v[0]=>3
v[1]=>4
v[2]=>5
v[3]=>6
v[4]=>7
-----------
*/

// Quest�o 8

/*
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
*/

// Esse c�digo nem roda, tem retorno na void ent�o n�o fiz.
