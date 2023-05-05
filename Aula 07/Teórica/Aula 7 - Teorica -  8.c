// 8 - O dono de um supermercado quer modificar o cálculo do preço final das mercadorias usando como base o seu valor de custo:
/*
• Até R$2,00, o acréscimo deve ser um valor fixo de R$0,15;
• Entre R$2,00 e R$5,00, o acréscimo deve ser proporcional, de 2%;
• Entre R$5,00 e R$20,00, deve ser proporcional, de 10%;
• Acima de R$20,00, o acréscimo deve ser proporcional, de 8%.
Assim, um produto que custe R$ 28,00, terá acréscimo de R$ 2,35:
R$ 0,15 => referente aos primeiros R$ 2,00;
+ R$ 0,06 => referente aos 2% sobre a faixa R$ 2,00 a R$ 5,00 (R$ 3);
+ R$ 1,50 => referente aos 10% sobre a faixa R$ 5,00 a R$ 20,00 (R$ 15);
+ R$ 0,64 => referente aos 8% acima de R$ 20,00.
Faça um programa que leia o valor de custo do produto e imprima o seu preço final.
*/

#include <stdio.h>

int main() {
	float custo, precoFinal;
	float newcusto1, acrescimo1, acrescimo2, acrescimo3, acrescimo4, acrescimoTotal;
	printf("Digite o valor de custo do produto: R$");
	scanf("%f", &custo);
  
  if (custo >= 20.0) {
  	newcusto1 = custo - 20 ;
  	acrescimo1 = newcusto1 * 1.08 - newcusto1 ;
  	acrescimo2 = 15*1.10 - 15; 
  	acrescimo3 = 3*1.02 - 3 ;
  	acrescimo4 = 0.15 ;
  	acrescimoTotal = acrescimo1 + acrescimo2 + acrescimo3 + acrescimo4;
    precoFinal = custo + acrescimoTotal;
    printf("O acrescimo foi = R$%.2f\n", acrescimoTotal);
  	} 
	else if (custo > 5.0 && custo <= 20.0) {
	newcusto1 = custo - 5 ;
  	acrescimo1 = newcusto1 * 1.10 - newcusto1; 
  	acrescimo2 = 3*1.02 - 3 ;
  	acrescimo3 = 0.15 ;
  	acrescimoTotal = acrescimo1 + acrescimo2 + acrescimo3;
    precoFinal = custo + acrescimoTotal;
    
    printf("O acrescimo foi = R$%.2f\n", acrescimoTotal);
	}
	else if (custo > 2.0 && custo <= 5.0) {
    newcusto1 = custo - 2 ;
  	acrescimo1 = newcusto1 * 1.02 ;
  	acrescimo2 = 0.15 ;
  	acrescimoTotal = acrescimo1 + acrescimo2;
    precoFinal = custo + acrescimoTotal;
    
    printf("O acrescimo foi = R$%.2f\n", acrescimoTotal);
  	} 
  	else {
    precoFinal = custo + 0.15;
    printf("O acrescimo foi = 0.15\n");
  	}
  
  	printf("O preco final do produto = R$%.2f\n", precoFinal);
  	
  	return 0;
}
