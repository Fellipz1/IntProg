/*
3 - a) Considerando Pi = 3,14159, para cada opção abaixo, escreva uma função que recebe como parâmetro o raio de um círculo e:
retorne seu diâmetro;
retorne sua circunferência;
retorne sua área;
imprima o diâmetro, a circunferência e a área chamando as funções três anteriores.
*/
// 3a

#include <stdio.h>

#define PI 3.14159

float q3D(float raio) 
{
    return 2 * raio;
}

float q3C(float raio) 
{
    return 2 * PI * raio;
}

float q3A(float raio) 
{
    return PI * raio * raio;
}

void q3dca(float raio) 
{
    float diametro = q3D(raio);
    float circunferencia = q3C(raio);
    float area = q3A(raio);

    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f\n", area);
}

int main() 
{
    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    q3dca(raio);

    return 0;
}


