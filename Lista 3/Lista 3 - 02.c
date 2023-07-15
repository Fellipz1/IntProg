/*2. Crie um tipo de dado denominado Vetor que representa uma estrutura chamada est_Vetor para representar um vetor de dimensões (coordenadas) x, y e z no espaço tridimensional: V (x, y, z).
Desenvolva uma função para calcular e retornar a soma de dois vetores A (xa, ya, za) e B (xb, yb, zb) e uma função para calcular e retornar a multiplicação de A pela coordenada de maior valor de B.
Faça um programa principal que leia do usuário as coordenadas dos dois vetores e que chame as duas funções citadas para imprimir os resultados retornados por elas.
*/

#include <stdio.h>

typedef struct
{
	float x;
	float y;
	float z;	
} est_Vetor;
est_Vetor soma(est_Vetor A, est_Vetor B)
{
	est_Vetor soma;
	soma.x = A.x + B.x;
	soma.y = A.y + B.y;
	soma.z = A.z + B.z;
	return soma;
}
void multiplicacao(est_Vetor A, est_Vetor B)
{
	float maxCoord = B.x;
	if(B.y > maxCoord)
	{
		maxCoord = B.y;
	}
	if(B.z > maxCoord)
	{
		maxCoord = B.z;
	}
	float axb,ayb,azb;
	axb=(A.x*maxCoord);
	ayb=(A.y*maxCoord);
	azb=(A.z*maxCoord);
	printf("Multiplicacao dos vetores: x=%.2f , y=%.2f, z=%.2f", axb,ayb,azb);		
}
int main()
{
	est_Vetor A, B;
    printf("Digite as coordenadas do vetor A (x y z): ");
    scanf("%f %f %f", &A.x, &A.y, &A.z);
	printf("Digite as coordenadas do vetor B (x y z): ");
	scanf("%f %f %f", &B.x, &B.y, &B.z);
    est_Vetor Soma = soma(A, B);
    printf("A soma dos vetores: (%.2f, %.2f, %.2f)\n", Soma.x, Soma.y, Soma.z);
    multiplicacao(A, B);
    return 0;
}
