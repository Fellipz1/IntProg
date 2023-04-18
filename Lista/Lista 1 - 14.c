// 14 - A taxa de juros aplicada em fundos depositados em um banco é determinada pelo tempo em que estes ficam depositados. Para um banco em particular, a seguinte tabela é usada:
/*
Tempo em depósito 											Taxa de juro 
Maior ou igual a 5 anos										0,95 
Menor que 5 anos mas maior ou igual a 4 anos  				0,9 
Menor que 4 anos mas maior ou igual a 3 anos 				0,85 
Menor que 3 anos mas maior ou igual a 2 anos 				0,75 
Menor que 2 anos mas maior ou igual a 1 ano 				0,65 
Menor que 1 ano 											0,55 
Usando esta informação, escreva uma função que receba o tempo em que os fundos foram mantidos em depósito e retorne a taxa de juros correspondente.
*/
//Resposta
/*
#include <stdio.h>

void taxadejuros()
{
	float tempo, valor, valoratual, taxa;
	
	printf ("Digite o tempo que seu dinheiro esta no banco: \n");
	scanf("%f", &tempo);
	
	printf("Digite o valor do seu deposito: \n");
	scanf ("%f", &valor);
	
	if(	tempo >= 5 ){
		taxa = 0.95;
		valoratual = (taxa*valor)+valor;
		printf ("O seu saldo = %f",valoratual);
	}
	else{
		if (tempo <5 && tempo>=4){
			taxa = 0.9;
			valoratual = (taxa*valor)+valor;
			printf ("O seu saldo = %f",valoratual);
			}
		else{
			if (tempo <4 && tempo>=3){
				taxa = 0.85;
				valoratual = (taxa*valor)+valor;
				printf ("O seu saldo = %f",valoratual);
			}
			else{
				if (tempo <3 && tempo>=2){
					taxa = 0.75;
					valoratual = (taxa*valor)+valor;
					printf ("O seu saldo = %f",valoratual);
				}
				else{
					if(tempo<2 && tempo >=1){
						taxa = 0,65;
						valoratual = (taxa*valor)+valor;
						printf ("O seu saldo = %f",valoratual);
					}
					else{
						if (tempo<1){
							taxa = 0,55;
							valoratual = (taxa*valor)+valor;
							printf ("O seu saldo = %f",valoratual);
						}
					}
				}
			}
	}	}
}

int main ()
{
	taxadejuros();
	return 0;
}
*/
// Abaixo segue o teste de mesa
/*

*/
