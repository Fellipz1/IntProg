// 6 - Fa�a as fun��es imprimeDivisaoInteira e imprimeDivisaoReal que recebem dois n�meros inteiros e imprimem o resultado da divis�o do primeiro n�mero pelo segundo.
// Se n�o for poss�vel fazer a divis�o (se o segundo valor for igual a zero), imprima uma mensagem informando o problema.
// Fa�a um programa para chamar as fun��es e teste ambas usando como entrada os valores 9 e 4.

/*
#include <stdio.h>

void imprimeDivisaoInteira(int x, int y) {
    if (y == 0) {
    	printf("Nao e possivel fazer a divisao, o segundo valor e igual a zero.\n");
    } else {
        printf("%d dividido por %d e igual a %d\n", x, y, x / y);
    }
}

void imprimeDivisaoReal(int x, int y) {
    if (y == 0) {
        printf("Nao e poss�vel fazer a divis�o, o segundo valor e igual a zero.\n");
    } else {
        printf("%d dividido por %d e igual a %.2f\n", x, y, (float) x / y);
    }
}

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    imprimeDivisaoInteira(num1, num2);
    imprimeDivisaoReal(num1, num2);

    return 0;
}
*/

/*
// Teste pedido com 9 e 4 
Digite o primeiro valor: 9
Digite o segundo valor: 4
9 dividido por 4 e igual a 2
9 dividido por 4 e igual a 2.25
*/

// 7 - Desenvolva a fun��o saoPositivos que recebe como par�metros dois n�meros reais, informados pelo usu�rio e verifica se ambos s�o maiores que zero. A fun��o deve retornar 1 (verdadeiro) se ambos forem positivos e 0 (falso) caso contr�rio.
// Fa�a um programa que leia dois n�meros e chame a fun��o, imprimindo "Ambos os valores sao positivos" ou "Ao menos um dos valores eh negativo.", dependendo do caso.
// Teste o programa com 1 e 2 e com 3 e -4.

/*
#include <stdio.h>

void saoPositivos(float num1, float num2) {
  printf("OS VALORES SAO POSITIVOS?\n");
  if (num1 > 0 && num2 > 0) 
  {
    printf("1, isso indica que os valores sao maiores que zero\n");
  } 
  else 
  {
    printf("0, isso indica que um ou os dois valores nao sao maiores que zero\n");
  }
}

int main() 
{
  float num1, num2;
  printf("Digite um valor real: ");
  scanf("%f", &num1);

  printf("Digite um segundo valor real: ");
  scanf("%f", &num2);
  
  saoPositivos(num1, num2);

  return 0;
}
*/

/*
// Teste pedido com 1 e 2
Digite um valor real: 2
Digite um segundo valor real: 2
OS VALORES SAO POSITIVOS?
1, isso indica que os valores sao maiores que zero
// Teste para 3 e -4
Digite um valor real: 3
Digite um segundo valor real: -4
OS VALORES SAO POSITIVOS?
0, isso indica que um ou os dois valores nao sao maiores que zero
*/

// 8 - Construa a fun��o calculaPesoIdeal que recebe o sexo e a altura de uma pessoa como par�metros. A fun��o deve calcular e retornar o peso ideal da pessoa, utilizando uma das seguintes f�rmulas:
// � masculino: (72.7 * alt) - 58;
// � feminino: (62.1 * alt) - 44.7.
// Fa�a um programa que l� o sexo, a altura e o peso de uma pessoa e imprime se esta pessoa est� ou n�o com o peso ideal.
// Teste seu programa com os valores F, 1.71 e 59.5 e com F, 1.71 e 61.491001

/*
#include <stdio.h>

float calculaPesoIdeal(char sexo, float alt) {
    float pesoIdeal;
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * alt) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * alt) - 44.7;
    } else {
        printf("Sexo invalido.\n");
        pesoIdeal = -1;
    }
    return pesoIdeal;
}

int main() {
    char sexo;
    float alt, peso, pesoIdeal;

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("Digite a altura em metros: ");
    scanf("%f", &alt);

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    pesoIdeal = calculaPesoIdeal(sexo, alt);

    if (pesoIdeal != -1) {
        if (peso == pesoIdeal) {
            printf("Voce esta no peso ideal.\n");
        } else if (peso < pesoIdeal) {
            printf("Voce esta abaixo do peso ideal.\n");
        } else {
            printf("Voce esta acima do peso ideal.\n");
        }
    }

    return 0;
}
*/

/*
// Teste para F, 1.71 e 59.5, considerando sexo, alt e peso.
Digite o sexo (M ou F): f
Digite a altura em metros: 1.71
Digite o peso em kg: 59.5
Voce esta abaixo do peso ideal.
// Teste para F, 1.71 e 61.491001, considerando sexo, alt e peso.
Digite o sexo (M ou F): f
Digite a altura em metros: 1.71
Digite o peso em kg: 61.491001
Voce esta no peso ideal.
*/

// 9 - Elabore um programa que leia 3 valores reais (x, y e z) de comprimento e imprima na tela se tais valores formam os lados de um tri�ngulo ou n�o. Para formar um tri�ngulo, os valores devem atender �s seguintes condi��es:
// x < y + z e y < x + z e z < x + y.
// Teste seu programa com os valores 4, 2.2 e 1.4 e depois com 3,4 e 5.

/*
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
*/

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

// 10 - Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se ele � Equil�tero, Is�sceles ou Escaleno. Sendo que:
//Tri�ngulo Equil�tero: possui os 3 lados iguais.
//Tri�ngulo Is�sceles: possui 2 lados iguais.
//Tri�ngulo Escaleno: possui 3 lados diferentes.

/*
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
*/

