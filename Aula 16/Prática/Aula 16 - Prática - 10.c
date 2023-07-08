//10) Considerando a estrutura
/*
typedef struct 
{
 float x;
 float y;
 float z;
} Vetor;
para representar um vetor no R3. Implemente uma função para calcular e retornar o resultado 
das operações de soma, subtração e produto vetorial entre dois vetores. Deverá ser 
desenvolvido uma função para cada uma das operações. Faça um programa para ler 2 vetores 
calcular a soma, subtração e produto vetorial deles e imprimir na tela. Dica produto vetorial:
x = y1*z2 - z1*x2;
y = z1*x2 - x1*z2;
z = x1*y2 - y1*x2;
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
	float x;
	float y;
	float z;
} Vetor;

Vetor soma(Vetor r[2])
{
	Vetor resultado;
	resultado.x = r[0].x + r[1].x;
	resultado.y = r[0].y + r[1].y;
	resultado.z = r[0].z + r[1].z;
	return resultado;
}

Vetor subtracao(Vetor r[2])
{
	Vetor resultado;
	resultado.x = r[0].x - r[1].x;
	resultado.y = r[0].y - r[1].y;
	resultado.z = r[0].z - r[1].z;
	return resultado;
}

Vetor produtoVetorial(Vetor r[2])
{
	Vetor resultado;
	resultado.x = (r[0].y * r[1].z) - (r[0].z * r[1].x);
	resultado.y = (r[0].z * r[1].x) - (r[0].x * r[1].z);
	resultado.z = (r[0].x * r[1].y) - (r[0].y * r[1].x);
	return resultado;
}

int main()
{
	int i;
	Vetor r[2];
	for(i = 0; i < 2; i++)
	{
		printf("Digite o valor de x do vetor %d: ", i+1);
		scanf("%f", &r[i].x);
		printf("Digite o valor de y do vetor %d: ", i+1);
		scanf("%f", &r[i].y);
		printf("Digite o valor de z do vetor %d: ", i+1);
		scanf("%f", &r[i].z);
	}
	printf("\n");
	Vetor resultadoSoma = soma(r);
	Vetor resultadoDiferenca = subtracao(r);
	Vetor resultadoProduto = produtoVetorial(r);
	printf("Soma entre os vetores = < %.2f, %.2f, %.2f >\n", resultadoSoma.x, resultadoSoma.y, resultadoSoma.z);
	printf("Subtracao entre vetorees = < %.2f, %.2f, %.2f >\n", resultadoDiferenca.x, resultadoDiferenca.y, resultadoDiferenca.z);
	printf("Produto entre os vetores = < %.2f, %.2f, %.2f >\n", resultadoProduto.x, resultadoProduto.y, resultadoProduto.z);
	return 0;
}
