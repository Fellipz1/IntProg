// 7. Escreva uma função que calcule e retorne a diferença elevada ao quadrado de dois números n1 e n2.

#include <math.h>
#include <stdio.h>

int diferenca_quadrado(int a, int b) 
{
    int dif = a - b;
    int dif_quadrado = pow(dif, 2);
    return dif_quadrado;
}

int main() 
{
    int a, b;
    int dif_quadrado;
    int dif;
    int valor;
    
    printf("Digite dois valores para calucular a diferenca entre eles ao quadrado:\n");

	printf("Valor 1:\n");
    scanf("%d", &a);

	printf("Valor 2:\n");
    scanf("%d", &b);

	valor = diferenca_quadrado(a, b); 

    printf("A diferenca dos valores ao quadrado = %d\n", valor);

    return 0;
}
// Resultado: Digite dois valores para calucular a diferenca entre eles ao quadrado:
/*O terminal nos mostra o seguinte:
Valor 1:
5
Valor 2:
3
A diferenca dos valores ao quadrado = 4
Isso está correto, uma vez que 5-3=2 e 2² = 4.
*/

