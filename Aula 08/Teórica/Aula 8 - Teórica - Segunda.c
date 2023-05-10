// Faça o teste de mesa com 2 times. Considerando para o 1º 1V,0E e 0D e para o 2º 2V,1E e 1D.
/*
#include<stdio.h>
void imprimePontosNoCamopeonato (int numTimes)
{
	int cont, vitorias, empates, derrotas;
	
	printf("\nPara cada time, digite o numero ");
	printf("de vitorias, empates e derrotas: ");
	
	cont = 0;
	while( cont < numTimes){
		printf("\nTime %d:", cont + 1);
		scanf("%d%d%d", &vitorias, &empates, &derrotas);
		printf("Total: %d pontos",(3 * vitorias) + (1 * empates));
		cont ++;
	}	
}
int main ()
{
	int times;
	printf("\nDigite o numero de times:");
	scanf("%d", &times);
	imprimePontosNoCampeonato(times);	
	return 0;
}
*/
// Teste de mesa
/*
Linha	|	times	|	numTimes	|	cont	|vitorias 	| empates 	| derrotas 	| condições
	18	|	?		|		?		|	?		|	?		|	?		|	?		|	?
	21	|	?		|		?		|	?		|	?		|	?		|	?		|	?		//Imprime: Digite o numero de times: 
	22	|	2		|		2		|	?		|	?		|	?		|	?		|	?
	2	|	2		|		2		|	?		|	?		|	?		|	?		|	?	
	4	|	2		|		2		|	?		|	?		|	?		|	?		|	?
	6	|	2		|		2		|	?		|	?		|	?		|	?		|	?		//Imprime: Para cada time, digite o numero 
	7	|	2		|		2		|	?		|	?		|	?		|	?		|	?		//Imprime: de vitorias, empates e derrotas: 
	9	|	2		|		2		|	0		|	?		|	?		|	?		|	?
	10	|	2		|		2		|	0		|	?		|	?		|	?		|	V
	11	|	2		|		2		|	1		|	?		|	?		|	?		|	V		//Imprime: Time 1
	12	|	2		|		2		|	1		|	1		|	0		|	0		|	V
	13	|	2		|		2		|	1		|	1		|	0		|	0		|	V		//Imprime: Total: 3 pontos
	15	|	2		|		2		|	2		|	?		|	?		|	?		|	V		
	10	|	2		|		2		|	2		|	?		|	?		|	?		|	V
	11	|	2		|		2		|	2		|	?		|	?		|	?		|	V		//Imprime: Time 2
	12	|	2		|		2		|	2		|	2		|	1		|	1		|	V
	13	|	2		|		2		|	2		|	2		|	1		|	1		|	V		//Imprime: Total: 4 pontos 
	15	|	2		|		2		|	3		|	?		|	?		|	?		|	V		
	10	|	2		|		2		|	3		|	?		|	?		|	?		|	F
	24		
*/

