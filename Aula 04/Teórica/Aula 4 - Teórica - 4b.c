// 4 - Considerando a fórmula para o cálculo da distância entre dois pontos (x1, y1) e (x2, y2):
// b) Escreva um programa em C (função principal) que capture do teclado as coordenadas dos 3 vértices de um triângulo, calcule e imprima o perímetro deste triângulo, chamando a função anterior.

#include <stdio.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2) 
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // d=distancia
    return d;
}
int main() 
{
    float x1, y1, x2, y2, x3, y3;
    float d1, d2, d3;
    float perimetro;

    printf("Entre com as coordenadas dos tres vertices do triangulo:\n");

    printf("Vertice 1:\n");
    scanf("%f %f", &x1, &y1);

    printf("Vertice 2:\n");
    scanf("%f %f", &x2, &y2);

    printf("Vertice 3:\n");
    scanf("%f %f", &x3, &y3);

    d1 = calcular_distancia(x1, y1, x2, y2);
    d2 = calcular_distancia(x2, y2, x3, y3);
    d3 = calcular_distancia(x3, y3, x1, y1);

    perimetro = d1 + d2 + d3;

    printf("O perimetro do triangulo= %f\n", perimetro);

    return 0;
}
