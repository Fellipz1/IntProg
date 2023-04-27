// 5) As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze.
// Escreva um programa que leia o número de maçãs compradas, calcule e escreva o valor total da compra.

#include <stdio.h>

void macas() 
{
    int macas;
    float custo, preco;
  
    printf("Digite quantas macas voce quer comprar: \n");
    scanf("%d", &macas);
	
	if (macas>=12){
		custo = 0.25;
		preco = macas *0.25;
		printf("Voce esta levando %d macas, custando R$: %.2f\n", macas, preco);
	}
  		else {
		custo = 0.3;
		preco = macas *0.3;
		printf("Voce esta levando %d macas, custando R$: %.2f\n", macas, preco);
  	}
}

int main() 
{
  macas();
  return 0;
}
