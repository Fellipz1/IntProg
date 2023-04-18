// 4 - Considerando a fórmula para o cálculo da distância entre dois pontos (x1, y1) e (x2, y2):
// a) Escreva uma função que receba como parâmetros as coordenadas de dois pontos e retorne a distância entre eles.

#include <stdio.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2) 
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // d=distancia
    return d;
}
