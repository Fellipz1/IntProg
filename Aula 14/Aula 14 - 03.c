// 3) Fa�a um programa que crie uma matriz 4x2 de n�meros reais, preencha-a com 
// valores digitados pelo usu�rio e imprima-a, organizando os elementos em linhas 
// e colunas. Dica: utilize �%8.2f� no printf para imprimir cada real alinhado � direita 
// em um espa�o de 8 casas, sendo duas decimais.

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
