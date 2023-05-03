// 3 - Faça uma função que converta uma quantidade de horas digitadas pelo usuário em minutos e retorne esta quantidade. Faça a leitura da quantidade de horas na função principal.

#include <stdio.h>

void questao3 (float h)
{
    float min = h * 60; //min=minutos; h=horas
    
    printf("Quantidade de horas: %.0f\n", h);
    printf("Quantidade em minutos: %.0f\n", min);
}

int main() 
{
	float horas;
	
	printf("Digite a quantidade de horas: \n");
	scanf("%f", &horas);
	
	questao3 (horas);
	return 0;
}


// Abaixo segue o teste de mesa
// Nesse exemplo usamos 7 horas
/*
		main 		calculo
Linha 	horas 		min			
11		?			?			
13		?			?			
15		?			?			Imprime: Digite a quantidade de horas:
16		7			?		
18		7			?			
03		7			?
05		7			420
07		7			420			Imprime: Quantidade de horas: 7
08		7			420			Imprime: Quantidade em minutos: 420
19	
*/
