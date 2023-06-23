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
		printf("%8.2f",m[�][j]);
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

// 1 - a) 1.1; b) 0.6; c) n�o existe nessa matriz.
// Qual � a diferen�a entre os n�meros �3� das duas instru��es abaixo ?	
// int mat [6] [3];
// mat [6][3] = 5;

// 3) Fa�a um programa que crie uma matriz 4x2 de n�meros reais, preencha-a com 
// valores digitados pelo usu�rio e imprima-a, organizando os elementos em linhas 
// e colunas. Dica: utilize �%8.2f� no printf para imprimir cada real alinhado � direita 
// em um espa�o de 8 casas, sendo duas decimais.
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

// 4) Fa�a um programa que crie uma matriz quadrada de inteiros de tamanho 3, 
// inicialize-a como uma matriz identidade e imprima-a, organizando os elementos 
// em linhas e colunas. Dica: utilize �%5d� no printf para imprimir cada inteiro 
// alinhado � direita.

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

// 5) Fa�a um programa que crie uma matriz NxM e inicialize-a com valores 
// digitados pelo usu�rio. Seu programa deve calcular e imprimir a soma dos valores 
// de cada linha e a m�dia dos valores de cada coluna.

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

// 6) Implemente uma fun��o que receba por par�metro uma matriz
// quadrada de n�meros reais (dimens�o m�xima 100) e um inteiro N que
// indica quantas linhas/colunas desta matriz ser�o consideradas. Essa
// fun��o dever� calcular e imprimir, separadamente, a soma dos
// elementos da diagonal principal e da diagonal secund�ria desta matriz.
// Fa�a, tamb�m, um programa principal que declare e preencha as
// vari�veis necess�rias para utilizar a fun��o desenvolvida. Note que �
// necess�rio ler o valor N antes da leitura da matriz e preencher apenas
// a quantidade de linhas/colunas que o usu�rio desejar.






