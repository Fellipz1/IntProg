/*
3 - b) Elabore um programa que leia do teclado o valor do raio de dois círculos e, para
cada círculo, chame a função que imprime as informações.
*/
// 3b

#include <stdio.h>

#define PI 3.14159

float q3Db(float r)
{
    return 2 * r;
}

float q3Cb(float r) 
{
    return 2 * PI * r;
}

float q3Ab(float r) 
{
    return PI * r * r;
}

void q3b(float r) 
{
    float diametro = q3Db(r);
    float circunferencia = q3Cb(r);
    float area = q3Ab(r);

    printf("Diametro: %.2f\n", diametro);
    printf("Circunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f\n", area);
}

int main() 
{
    float r1, r2;

    printf("Digite o valor do raio do primeiro circulo: ");
    scanf("%f", &r1);
    q3b(r1);

    printf("Digite o valor do raio do segundo circulo: ");
    scanf("%f", &r2);
    q3b(r2);

    return 0;
}
