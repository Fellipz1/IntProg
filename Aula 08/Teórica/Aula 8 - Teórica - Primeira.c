// Faça o teste de mesa com entrada 2 e com entrada -1.
/*
#include<stdio.h>
int main()
{
	int numImpressoes, contador;
	
	printf("Quantas vezes a impressao deve ser feita?");
	scanf("%d",&numImpressoes);
	
	contador = 0;
	
	while( contador < numImpressoes)
	{
		printf("Faca o teste de mesa dos exercicios\n");
		contador++; //soma 1 à variável
	}
	
	return 0;
}
*/

// Teste de mesa
/*
Linha	|	numImpressao	|	contador	|	teste de condição
	2	|		?			|		?		|			?
	4	|		?			|		?		|			?
	6	|		?			|		?		|			?				//Imprime: Quantas vezes a impressao deve ser feita?
	7	|		2			|		?		|			?
	9	|		2			|		0		|			?
	11	|		2			|		0		|			V
	13	|		2			|		0		|			V				//Imprime: Faca o teste de mesa dos exercicios
	14	|		2			|		1		|			V
	11	|		2			|		1		|			V
	13	|		2			|		1		|			V				//Imprime: Faca o teste de mesa dos exercicios
	14	|		2			|		2		|			V
	11	|		2			|		2		|			F
	17		
	
Linha	|	numImpressao	|	contador	|	teste de condição
	2	|		?			|		?		|			?
	4	|		?			|		?		|			?
	6	|		?			|		?		|			?				//Imprime: Quantas vezes a impressao deve ser feita?
	7	|		-1			|		?		|			?
	9	|		-1			|		0		|			?
	11	|		-1			|		0		|			F
	17	
*/
