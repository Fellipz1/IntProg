// 2 - 2) Faça um programa para calcular a área de um círculo. 
// A área de um círculo é dada pela seguinte fórmula a = pr2.
// ? O valor do raio r será digitado pelo usuário.
//Verifique se o raio é positivo antes de efetuar cálculo, caso contrário imprima uma mensagem de erro ao usuário.

#include <stdio.h>
//nesse código utilizaremos a = área e r = raio
void calculandoAreaDoCirculo() 
{
    float r, a=0; 
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    if (r>=0){
    a = 3.14159*r*r; 
    printf("Area do circulo = %f\n", a);
    }
    else {
        if(r<0);
        printf ("O raio digitado foi considerado invalido");
        }
}

int main() {
    calculandoAreaDoCirculo (); 
    return 0;
}
