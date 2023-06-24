// 4) Faça um programa que crie uma matriz quadrada de inteiros de tamanho 3, 
// inicialize-a como uma matriz identidade e imprima-a, organizando os elementos 
// em linhas e colunas. Dica: utilize “%5d” no printf para imprimir cada inteiro 
// alinhado à direita.

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
