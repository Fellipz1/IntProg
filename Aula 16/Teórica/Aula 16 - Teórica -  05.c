// 5) a) Crie uma estrutura chamada ponto contendo apenas as coordenadas x e y (inteiros) do ponto.
// b) Faça uma função que receba dois pontos por parâmetro e retorne a distância entre eles.
// c) Faça um programa que declare 2 pontos, leia as coordenadas x e y de cada um e chame a função criada para calcular a distância entre eles. Apresente no final a distância entre os dois pontos.

#include <stdio.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

float distanciaPontos(struct ponto p1, struct ponto p2)
{
    int difX = p2.x - p1.x;
    int difY = p2.y - p1.y;
    float distancia = sqrt(difX * difX + difY * difY);
    return distancia;
}

int main()
{
    struct ponto ponto1, ponto2;

    printf("Digite as coordenadas do ponto 1:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto1.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto1.y);

    printf("\nDigite as coordenadas do ponto 2:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto2.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto2.y);

    float distancia = distanciaPontos(ponto1, ponto2);

    printf("\nA distancia entre os pontos (%d, %d) e (%d, %d) = %.2f\n", ponto1.x, ponto1.y, ponto2.x, ponto2.y, distancia);

    return 0;
}
