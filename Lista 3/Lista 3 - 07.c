/* 7. A matriz triangular abaixo � conhecida como tri�ngulo de Pascal:
Note que cada elemento dessa matriz � composto pela soma do elemento antecessor com o elemento imediatamente acima. Outra forma de representa��o do tri�ngulo de Pascal encontra-se abaixo:

Observe que cada elemento dessa matriz � composto pela soma do elemento imediatamente acima com o antecessor do elemento imediatamente acima.

Crie duas fun��es para impress�o do tri�ngulo de Pascal, sendo uma fun��o para imprimi-lo deacordo com a Figura 1 e outra fun��o para imprimi-lo de acordo com a Figura 2. Essas fun��es 
devem utilizar matrizes para c�lculo dos elementos do tri�ngulo de Pascal e devem receber o n�mero de linhas da matriz por par�metro. Note que a matriz em quest�o � uma matriz quadrada.
Crie um m�todo principal para receber do usu�rio o n�mero de linhas da matriz. Esse m�todo deve chamar as duas fun��es de impress�o de tri�ngulo de Pascal criadas anteriormente.
*/

#include <stdio.h>
void imprimirTrianguloPascal1(int linhas)
{
    int triangulo[linhas][linhas];
   	int i,j;
    for(i = 0; i < linhas; i++)
	{
        triangulo[i][0] = 1;
	}
    for(i = 1; i < linhas; i++)
	{
        for(j = 1; j <= i; j++)
		{
            triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
        }
    }
    for(i = 0; i < linhas; i++)
	{
        for(j = 0; j <= i; j++)
		{
            printf("%5d", triangulo[i][j]);
        }
        printf("\n");
    }
}
void imprimirTrianguloPascal2(int linhas)
{
	int i,j;
    int triangulo[linhas][linhas];
    for(i = 0; i < linhas; i++)
	{
        triangulo[0][i] = 1;
    }
    for(i = 1; i < linhas; i++)
	{
        for(j = 0; j < linhas-i; j++)
		{
            triangulo[i][j] = triangulo[i-1][j] + triangulo[i-1][j+1];
        }
    }
    for(i = 0; i < linhas; i++)
	{
        for(j = 0; j < linhas-i; j++)
		{
            printf("%5d", triangulo[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int linhas;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Triangulo 1:\n");
    imprimirTrianguloPascal1(linhas);
    printf("\nTriangulo 2:\n");
    imprimirTrianguloPascal2(linhas);
    
    return 0;
}
