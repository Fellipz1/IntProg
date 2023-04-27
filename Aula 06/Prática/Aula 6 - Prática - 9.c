// 9 - Elabore um programa que leia 3 valores reais (x, y e z) de comprimento e imprima na tela se tais valores formam os lados de um triângulo ou não. Para formar um triângulo, os valores devem atender às seguintes condições:
// x < y + z e y < x + z e z < x + y.
// Teste seu programa com os valores 4, 2.2 e 1.4 e depois com 3,4 e 5.


#include <stdio.h>

void formaOuNTri(){

    float x, y, z;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Digite o valor de z: ");
    scanf("%f", &z);

    if (x < y + z && y < x + z && z < x + y) {
        printf("Os valores informados formam um triangulo.\n");
    } else {
        printf("Os valores informados NAO formam um triangulo.\n");
    }

}

int main() {
	formaOuNTri();
    return 0;
}


/*
// Teste com os valores 4, 2.2 e 1.4.
Digite o valor de x: 4
Digite o valor de y: 2.2
Digite o valor de z: 1.4
Os valores informados NAO formam um triangulo.
// Teste com os valores 3,4 e 5.
Digite o valor de x: 3
Digite o valor de y: 4
Digite o valor de z: 5
Os valores informados formam um triangulo.
*/
