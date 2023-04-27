// 10 - Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se ele � Equil�tero, Is�sceles ou Escaleno. Sendo que:
//Tri�ngulo Equil�tero: possui os 3 lados iguais.
//Tri�ngulo Is�sceles: possui 2 lados iguais.
//Tri�ngulo Escaleno: possui 3 lados diferentes.


#include <stdio.h>

void tipoDeTriangulo(){
    float lado1, lado2, lado3;

    printf("Digite o tamanho do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o tamanho do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o tamanho do terceiro lado: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado1 == lado3) {
        printf("Triangulo equilatero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

}
int main() {
	tipoDeTriangulo();
    return 0;
}
