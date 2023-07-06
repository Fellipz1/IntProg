// 6) Utilizando a estrutura ponto definida no exercício 5, faça uma função que receba 2 pontos e retorne o ponto mais próximo da origem. Em seguida, modifique o programa principal para ler 4 pontos e imprimir 
// apenas as coordenadas do ponto mais próximo da origem.

#include <stdio.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

float distanciaOrigem(struct ponto p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}

struct ponto pontoMaisProximoOrigem(struct ponto p1, struct ponto p2)
{
    float distancia1 = distanciaOrigem(p1);
    float distancia2 = distanciaOrigem(p2);

    if (distancia1 <= distancia2)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

int main()
{
    struct ponto ponto1, ponto2, ponto3, ponto4;

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

    printf("\nDigite as coordenadas do ponto 3:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto3.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto3.y);

    printf("\nDigite as coordenadas do ponto 4:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto4.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto4.y);

    struct ponto pontoMaisProximo = pontoMaisProximoOrigem(pontoMaisProximoOrigem(ponto1, ponto2), pontoMaisProximoOrigem(ponto3, ponto4));

    printf("\nAs coordenadas do ponto mais proximo da origem = (%d, %d)\n", pontoMaisProximo.x, pontoMaisProximo.y);

    return 0;
}
