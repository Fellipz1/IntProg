// 2. Vamos refazer o programa que calcula �rea do c�rculo?
// b) Fa�a um programa em C (fun��o principal) que leia um valor real do teclado, chame a fun��o da letra a) e imprima o resultado obtido.

#include <stdio.h>
//nesse c�digo utilizaremos a = �rea e r = raio
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
