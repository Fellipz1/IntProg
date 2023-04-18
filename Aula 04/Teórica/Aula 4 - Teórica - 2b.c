// 2. Vamos refazer o programa que calcula área do círculo?
// b) Faça um programa em C (função principal) que leia um valor real do teclado, chame a função da letra a) e imprima o resultado obtido.

#include <stdio.h>
//nesse código utilizaremos a = área e r = raio
float calculandoAreaDoCirculo(float r) 
{
    float a = 3.14159*r*r; 
    return a;
}

int main() {
    float r, a;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    a = calculandoAreaDoCirculo(r);

    printf("Area do circulo = %f\n", a);

    return 0;
}
