// Exercícios 
// Questão 1 
// vet |1|2|4|7|4|2|8|9|0|6|5|4|3|
// Quais são os elementos do vetor referenciados por: vet[3]? vet[0]? vet[13]
// Resposta vet[3]= 7 ; vet[0]= 1 ; vet[13]= não existe no vetor proposto pelo exercício;

// Questão 2 
// Quais as modificações feitas no vetor em:
// vet[1]=vet[3]*vet[1] = Nesse caso, o vetor na posição 3 do vetor é mulltiplicado pelo vaolor do elemento na posição 1, o resultado da operação fica armazenado na posição 1 do vetor. Não falando em vetor temos nosso quarto valor sendo multiplicado pelo segundo e o resultado sendo o novo valor do segundo número digitado pelo usuario.
// vet[10]=pow(vet[2],2)+vet[0] = Aqui o vetor do elemento na posição 2 do vetor é elevado ao quadrado usando a função pow, após isso o resultado é somado ao valor do elemento na posição 0 do vetor, o resultado final é atribuído à posição 10 do vetor.
// vet[9]=vet[3]<vet[4] = Nesse temos a expressão vet[3]<vet[4] sendo avaliada. Se o valor do vet[3] for menor que o de vet[4], temos um resultado 1(verdadeiro), se não temos então um resultado 0 (negativo), o resultado é atribuido à posição 9 do vetor.
// vet[6]=vet[vet[5]] = Aqui, o valor do elemento na posição 5 do vetor é usado como índice para acessar o valor correspondente no vetor. Esse valor resultante é então atribuído ao vetor de posição 6.

// Questão 3 
// Qual é a diferença entre os números "3" das duas instruções abaixo?
// int vet[3]; -> Aqui declaramos que teremos e elementos no vetor que estamos declarando.
// vet[3]=5; -> Aqui estamos alterando o valor do nosso quarto vetor.

// Questão 4 
// Faça um programa que inicialize um vetor de 20 posições com os primeiros 20 números ímpares e imprima esse vetor.

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

// Questão 5
// Faça um programa que leia um vetor de números inteiros de 7 posições, calcule e imprima a média dos elementos desse vetor.

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

// Questão 6
// Faça um programa que leia um vetor de números reais de 5 posições, e função que receba essa vetor, calcule e imprima a soma dos elementos desse vetor.

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

// Questão 7

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
*/

// Questão 8

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

// Esse código nem roda, tem retorno na void então não fiz.
