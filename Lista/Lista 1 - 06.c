// 6 - Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a quantidade de quilômetros rodados e a quantidade de combustível consumido.

#include <stdio.h>

float questao6(float qQR, float qCG) //qQR=quantidade de quilometros rodados; qC=quantidade de combustivel gasto
{
	float mediaCG = qQR/qCG; //mediaCC=media de combustivel gasto
	return mediaCG;
}
int main ()
{
	float qQR, qCG;
	
	printf("Digite a quantidade de quilometros rodados:\n ");
    scanf("%f", &qQR);
    
    printf("Digite a quantidade de combustivel gasto:\n ");
    scanf("%f", &qCG);
    
    float mediaCG = questao6(qQR, qCG);
    
    printf ("Media de combustivel: %.2f km/l", mediaCG);
    
    return 0;	
}


// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer o teste com 120 e 10
/*
		main			Calculo
Linha 	qQR		qCG		mediaCG
08		?		?		?	
10		?		?		?
12		?		?		?			Imprime: Digite a quantidade de quilometros rodados :
13		120		?		?
15		120		?		?			Imprime: Digite a quantidade de combustivel gasto:
16		120		10		?			
18		120		10		?	
3		120		10		?
5		120		10		12.00
6		120		10		12.00
20		120		10		12.00		Imprime: Media de combustivel: 12.00 km/l
22		
*/
