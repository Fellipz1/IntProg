// 2 - 2) Fa�a um programa para calcular a �rea de um c�rculo. 
// A �rea de um c�rculo � dada pela seguinte f�rmula a = pr2.
// ? O valor do raio r ser� digitado pelo usu�rio.
//Verifique se o raio � positivo antes de efetuar c�lculo, caso contr�rio imprima uma mensagem de erro ao usu�rio.

#include <stdio.h>
//nesse c�digo utilizaremos a = �rea e r = raio
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
