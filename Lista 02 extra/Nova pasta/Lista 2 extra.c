// 1) Fa�a um programa que leia um vetor de n�meros reais de 10 posi��es e imprima o respectivo vetor.

/*
#include <stdio.h>

void soma(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		printf("O valor do vetor %d = %.2f\n",i, vetor[i]);
	}
}

int main ()
{
	int tamanho=10; 
	float vetor[tamanho];
	int i; 
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	soma(vetor, tamanho);
	
	return 0;
}
*/

//  2) Fa�a um programa que crie tr�s vetores, preencha dois deles com valores lidos do teclado e, ao
// final, preencha o terceiro vetor armazenando, em cada �ndice, a soma dos elementos com este
// mesmo �ndice nos outros vetores.

/*
#include <stdio.h>

void somavetores(float vetor1[], float vetor2[], int tamanho)
{
	float vetor3[tamanho];
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		vetor3[i] = (vetor1[i]+vetor2[i]);
		
		printf("O valor %d do vetor 3 = %.2f\n", i, vetor3[i]);
	}
}

int main ()
{
	int tamanho=1; 
	float vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
	int i; 
	
	printf("Digite o tamanho dos seus vetores: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor 1:\n",i);
		scanf("%f",&vetor1[i]);
	}
	
	printf("---------------------------------------\n");
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor 2:\n",i);
		scanf("%f",&vetor2[i]);
	}
	
	somavetores(vetor1, vetor2, tamanho);
	
	return 0;
}
*/

// 3) Fa�a um programa que armazene, no vetor v, 10 valores reais lidos do teclado e calcule sua
// m�dia. O programa deve copiar os elementos acima da m�dia para o vetor v1 e os abaixo da m�dia
// para o vetor v2. Ao final, o programa deve imprimir v1 e v2.
//Falta colocar a parte de v1 e v2

/*
#include <stdio.h>

void media(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	float media, v1, v2;
	
	for(i=0; i<tamanho;i++)
	{
		soma+=vetor[i];
	}
	media = (soma/tamanho);
	printf("A media dos elementos = %.2f\n",media);
	
	for(i=0; i<tamanho; i++)
	{
		if (vetor[i]>media)
		{
			v1=vetor[i];
			printf("Os elementos maiores que %.2f = %f\n", media, v1);
		}
	}

	for(i=0; i<tamanho; i++)
	{
		if (vetor[i]<media)
		{
			v2=vetor[i];
			printf("Os elementos menores que %.2f = %f\n", media, v2);
		}
	}
}

int main ()
{
	int tamanho=10; 
	float vetor[tamanho];
	int i; 
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	media(vetor, tamanho);
	
	return 0;
}
*/

// 4) Elabore duas fun��es que fa�am respectivamente a uni�o e a interse��o de duas sequ�ncias de
// inteiros. Cada fun��o dever� receber 4 par�metros: tr�s vetores de valores inteiros, (A, B e C) e um
// inteiro representando o tamanho dos dois primeiros vetores (tamAB). Assuma que o tamanho do vetor C � apropriado para cada opera��o.
// Desenvolva um programa que crie quatro vetores, sendo v1, v2 e vInter, de tamanho 10, e vUniao,
// de tamanho 20. O programa deve preencher os vetores v1 e v2 com valores do teclado e chamar as
// fun��es acima. Ap�s as chamadas de fun��o, o programa deve imprimir vInter e vUniao.

// 5) Fa�a um programa que contenha: (1) um vetor com N inteiros, representando c�digos de
// produtos; (2) um vetor com N inteiros, representando a quantidade de cada produto em estoque; (3)
// um vetor com N reais, representando o valor de cada produto; (4) um vetor com M inteiros, com os
// c�digos dos produtos vendidos no dia (pode haver repeti��o).
// Elabore fun��es para:
// a) calcular o valor total dos produtos em estoque;
// b) calcular o valor total vendido no dia;
// c) atualizar o estoque, descontando as unidades vendidas de cada produto.

// 6) Fa�a um programa que crie um vetor com 100 posi��es e preencha as primeiras posi��es do
// vetor at� que seja digitado um valor negativo. O programa deve inverter os valores armazenados nas
// 3 primeiras posi��es com os valores armazenados nas �ltimas 3 posi��es preenchidas e imprimir a sequ�ncia obtida ao final.
// Por exemplo: Se a sequ�ncia digitada for 4 6 8 3 6 9 2 0 7 -1
// o programa dever� imprimir no final a sequ�ncia 7 0 2 3 6 9 8 6 4

// 7) Numa partida de basquete, a cada cesta, s�o registrados o time que fez a cesta (sendo 1 o time da
// casa e 2 o time visitante) e o n�mero de pontos da cesta (1, 2 ou 3 pontos). Os valores s�o
// armazenados dois vetores de tamanho 200: T que armazena o time de basquete e P que armazena
// um valor positivo que indica a quantidade de pontos de cada cesta. Os dados de cada cesta s�o
// armazenados nos vetores T e P com mesmo �ndice, indicando qual time (1 ou 2) fez uma quantidade de pontos.
// a) Fa�a uma fun��o que recebe quatro par�metros: os vetores T e P, seu tamanho e o identificador
// de um dos times (1 ou 2). A fun��o dever� retornar a quantidade de pontos que o time indicado fez.
// Por exemplo, para os vetores abaixo e o time 1, o valor retornado deve ser 8 (3 + 3 + 2).
// b) Fa�a o programa principal que leia as informa��es necess�rias para 20 cestas, utilize a fun��o do
// item �a� para imprimir a quantidade de pontos do time da casa e do time visitante.
