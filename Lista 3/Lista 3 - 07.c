/* 7. A matriz triangular abaixo é conhecida como triângulo de Pascal:
Note que cada elemento dessa matriz é composto pela soma do elemento antecessor com o elemento imediatamente acima. Outra forma de representação do triângulo de Pascal encontra-se abaixo:

Observe que cada elemento dessa matriz é composto pela soma do elemento imediatamente acima com o antecessor do elemento imediatamente acima.

Crie duas funções para impressão do triângulo de Pascal, sendo uma função para imprimi-lo deacordo com a Figura 1 e outra função para imprimi-lo de acordo com a Figura 2. Essas funções 
devem utilizar matrizes para cálculo dos elementos do triângulo de Pascal e devem receber o número de linhas da matriz por parâmetro. Note que a matriz em questão é uma matriz quadrada.
Crie um método principal para receber do usuário o número de linhas da matriz. Esse método deve chamar as duas funções de impressão de triângulo de Pascal criadas anteriormente.
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
