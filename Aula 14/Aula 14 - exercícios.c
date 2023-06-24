/*
#include<stdio.h>
#include<conio.h>
int main (void )
{
  int matriz[3][3],i, j;
  
  printf ("\nDigite valor para os elementos da matriz\n\n");
  
  for ( i=0; i<3; i++ )
    for ( j=0; j<3; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i+1, j+1);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  
  printf("\n\n******************* Saida de Dados ********************* \n\n");
  
  for ( i=0; i<3; i++ )
    for ( j=0; j<3; j++ )
    {
      printf ("\nElemento[%d][%d] = %d\n", i+1, j+1,matriz[ i ][ j ]);
      printf("%d",matriz[i][j]);
    }
  
  getch();
  return(0);
}
*/

/*
Para imprimir como matriz 
for (i){
	for (j){
		printf("%8.2f",m[í][j]);
	}
	printf("\n");
}

Matriz identidade (diagonal principal)
1	0	0	
0	1	0
0	0	1
para fazer uma dessa forma devemos usar o if (i=j){Matriz[i][j]=1}

Diagonal Segundaria 
0	0	1
0	1	0
1	0	0

*/

// 1 - a) 1.1; b) 0.6; c) não existe nessa matriz.

// 2) Qual é a diferença entre os números “3” das duas instruções abaixo ?	
// int mat [6] [3];
// mat [6][3] = 5;

// A diferença entre os números "3" nas duas instruções é o contexto em que eles estão sendo utilizados.
// Na declaração int mat[6][3];, o número "3" indica que a matriz mat terá 6 linhas e 3 colunas, em que cada elemento é do tipo int.
// Já na, instrução mat[6][3] = 5;, o número "3" está sendo utilizado como um índice para acessar um elemento específico da matriz mat. 

// 3) Faça um programa que crie uma matriz 4x2 de números reais, preencha-a com 
// valores digitados pelo usuário e imprima-a, organizando os elementos em linhas 
// e colunas. Dica: utilize “%8.2f” no printf para imprimir cada real alinhado à direita 
// em um espaço de 8 casas, sendo duas decimais.
/*
#include<stdio.h>

int main ()
{
  	int i, j;
  	float matriz[4] [2];
  	
  	printf ("\nDigite valor para os elementos da matriz \n");
  
  	for ( i=0; i<4; i++ ){
  		for ( j=0; j<2; j++ )
	    {
	      printf ("\nElemento[%d][%d] = ", i, j);
	      scanf ("%f", &matriz[ i ][ j ]);
	    }
	}
    
  	for ( i=0; i<4; i++ ){
  		for ( j=0; j<2; j++ )
	    {
	      printf("%8.2f",matriz[i][j]);
	    }
	printf("\n");
	}
    
    
  	return(0);
}
*/

// 4) Faça um programa que crie uma matriz quadrada de inteiros de tamanho 3, 
// inicialize-a como uma matriz identidade e imprima-a, organizando os elementos 
// em linhas e colunas. Dica: utilize “%5d” no printf para imprimir cada inteiro 
// alinhado à direita.

/*
#include<stdio.h>

int main ()
{
  	int i, j;
  	int matriz[3] [3];
  	  	
  	for ( i=0; i<3; i++ ){
  		for ( j=0; j<3; j++ )
	    {
	    	if(i==j)
	    	{
				matriz[i][j]=1;
			}
			else
			{
				matriz[i][j]=0;	
			}
	    }
	}
     
  	for ( i=0; i<3; i++ ){
  		for ( j=0; j<3; j++ )
	    {
	      printf("%5d",matriz[i][j]);
	    }
	printf("\n");
	}
    
    
  	return(0);
}
*/

// 5) Faça um programa que crie uma matriz NxM e inicialize-a com valores 
// digitados pelo usuário. Seu programa deve calcular e imprimir a soma dos valores 
// de cada linha e a média dos valores de cada coluna.

/*
#include <stdio.h>

int main()
{
    int x, y, i, j;

    printf("Digite quantas linhas voce quer na sua matriz: \n");
    scanf("%d", &x);

    printf("Digite quantas colunas voce quer na sua matriz: \n");
    scanf("%d", &y);

    int matriz[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("Elemento[%d][%d] = \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < x; i++)
    {
        int somax = 0;
        for (j = 0; j < y; j++)
        {
            somax += matriz[i][j];
        }
        printf("A soma da linha %d = %d\n", i+1, somax);
    }

    for (j = 0; j < y; j++)
    {
        int somay = 0;
        for (i = 0; i < x; i++)
        {
            somay += matriz[i][j];
        }
        float mediay = (float)somay / x;
        printf("A media da coluna %d = %.2f\n", j+1, mediay);
    }

    return 0;
}
*/

// 6) Implemente uma função que receba por parâmetro uma matriz
// quadrada de números reais (dimensão máxima 100) e um inteiro N que
// indica quantas linhas/colunas desta matriz serão consideradas. Essa
// função deverá calcular e imprimir, separadamente, a soma dos
// elementos da diagonal principal e da diagonal secundária desta matriz.
// Faça, também, um programa principal que declare e preencha as
// variáveis necessárias para utilizar a função desenvolvida. Note que é
// necessário ler o valor N antes da leitura da matriz e preencher apenas
// a quantidade de linhas/colunas que o usuário desejar.

/*
#include <stdio.h>

void calculaSomasDiagonais(float matriz[][100], int N) {
    float somaDiagonalPrincipal = 0.0;
    float somaDiagonalSecundaria = 0.0;
    int i, j;

    for (i = 0; i < N; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][N - 1 - i];
    }

    printf("Soma dos elementos da diagonal principal: %.2f\n", somaDiagonalPrincipal);
    printf("Soma dos elementos da diagonal secundaria: %.2f\n", somaDiagonalSecundaria);
}

int main() {
    float matriz[100][100];
    int N, i, j;

    printf("Digite o valor de N (dimensao da matriz): ");
    scanf("%d", &N);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    calculaSomasDiagonais(matriz, N);

    return 0;
}
*/

// 7) Implemente as funções abaixo para que o programa
// funcione corretamente.
/*
#include <stdio.h>
#define MAX 10
int main ()
{
	float a [MAX][MAX], b[MAX][MAX];
	int m, n;
	printf("\nDigite o numero de linhas e de colunas das matrizes: ");
	scanf("%d%d", &m. &n);
	printf("\nForneça os elementos da matriz a: ");
	lematriz(a,m,n); //leitura da matriz a
	printf("\nForneça os elementos da matriz b: ");
	lematriz(b,m,n); //leitura da matriz b
	copiazera(a,b,m,n); //a matriz a "recebe" b e b é zerada.
	printf("\nMatriz a: \n");
	imprimematriz(a,m,n);
	printf("\nMatriz b: \n");
	imprimematriz(b,m,n);
	return 0;
}
*/

/*
#include <stdio.h>
#define MAX 10

void lematriz(float matriz[][MAX], int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void copiazera(float matrizA[][MAX], float matrizB[][MAX], int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            matrizA[i][j] = matrizB[i][j];
            matrizB[i][j] = 0.0;
        }
    }
}

void imprimematriz(float matriz[][MAX], int m, int n) 
{
    int i, j;
    for (i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    float a[MAX][MAX], b[MAX][MAX];
    int m, n;
    printf("Digite o numero de linhas e colunas das matrizes: ");
    scanf("%d%d", &m, &n);
    printf("\nForneça os elementos da matriz a:\n");
    lematriz(a, m, n); // leitura da matriz a
    printf("\nForneça os elementos da matriz b:\n");
    lematriz(b, m, n); // leitura da matriz b
    copiazera(a, b, m, n); // a matriz a "recebe" b e b é zerada
    printf("\nMatriz a:\n");
    imprimematriz(a, m, n);
    printf("\nMatriz b:\n");
    imprimematriz(b, m, n);
    return 0;
}
*/

// 8) Faça uma função para manipulação de matrizes quadradas NxN com o seguinte “Menu”:
// Escolha uma opção de cálculo para matrizes:
// 1) Soma
// 2) Diferença
// 3) Transposta
// 4) Produto
// 5) Sair
// Opção:__
// Na opção (3) o usuário só precisa fornecer uma matriz, nas opções (1), (2) e (4) o usuário deve
// fornecer duas matrizes. O resultado deve apenas ser impresso.

/*
#include <stdio.h>

void somaMatrizes(int matrizA[][100], int matrizB[][100], int N) {
    int matrizResultado[100][100];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Resultado da soma das matrizes:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }
}

void diferencaMatrizes(int matrizA[][100], int matrizB[][100], int N) {
    int matrizResultado[100][100];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    printf("Resultado da diferenca das matrizes:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }
}

void transpostaMatriz(int matriz[][100], int N) {
    int matrizTransposta[100][100];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz transposta:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matrizTransposta[i][j]);
        }
        printf("\n");
    }
}

void produtoMatrizes(int matrizA[][100], int matrizB[][100], int N) 
{
    int matrizResultado[100][100];
    int i, j, k;

    for (i = 0; i < N; i++) 
	{ 
        for (j = 0; j < N; j++) 
		{
            matrizResultado[i][j] = 0;
            for (k = 0; k < N; k++) 
			{
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Resultado do produto das matrizes:\n");
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
		{
            printf("%d\t", matrizResultado[i][j]);
        }
        printf("\n");
    }
}

void manipulaMatrizes() 
{
    int matrizA[100][100], matrizB[100][100];
    int N, opcao, i, j;

    printf("Digite o valor de N (dimensao das matrizes): ");
    scanf("%d", &N);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < N; i++) 
	{
        for (j = 0; j < N; j++) 
		{
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < N; i++) 
	{
        for (j = 0; j < N; j++) 
		{
            printf("Digite o elemento da posicao (%d, %d): ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    do 
	{
        printf("\nEscolha uma opcao de calculo para matrizes:\n");
        printf("1) Soma\n");
        printf("2) Diferenca\n");
        printf("3) Transposta\n");
        printf("4) Produto\n");
        printf("5) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) 
		{
            case 1:
                somaMatrizes(matrizA, matrizB, N);
                break;
            case 2:
                diferencaMatrizes(matrizA, matrizB, N);
                break;
            case 3:
                printf("\nMatriz A:\n");
                transpostaMatriz(matrizA, N);
                printf("\nMatriz B:\n");
                transpostaMatriz(matrizB, N);
                break;
            case 4:
                produtoMatrizes(matrizA, matrizB, N);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);
}

int main() 
{
    manipulaMatrizes();
    return 0;
}
*/

// 9)Faça um programa que leia 3 vetores reais de
// dimensão 10 e uma função que gere uma matriz
// (10 x 3) onde cada coluna é dada por um destes
// vetores.

/*
#include <stdio.h>

#define LINHAS 10
#define COLUNAS 3

void gerarMatriz(float matriz[][COLUNAS], float vetor1[], float vetor2[], float vetor3[]) {
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        matriz[i][0] = vetor1[i];
        matriz[i][1] = vetor2[i];
        matriz[i][2] = vetor3[i];
    }
}

int main() {
    float vetor1[10], vetor2[10], vetor3[10];
    float matriz[LINHAS][COLUNAS];
    int i, j;

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor1[i]);
    }

    printf("\nDigite os elementos do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor2[i]);
    }

    printf("\nDigite os elementos do terceiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor3[i]);
    }

    gerarMatriz(matriz, vetor1, vetor2, vetor3);

    printf("\nMatriz gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
