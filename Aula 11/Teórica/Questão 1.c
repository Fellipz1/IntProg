// 1

#include<stdio.h>

void valor_total()
{
	float valor_prod, valor=0;
	int quant;
	
	printf("Digite a quantidade de produtos: \n");
	scanf("%d",&quant);
	printf("Digite o valor do produtos: \n");
	scanf("%f",&valor_prod);
	
	while (quant>0) 
	{
		valor = valor +(valor_prod*quant);
		printf("Digite a quantidade de produtos: \n");
		scanf("%d",&quant);
		printf("Digite o valor do produtos: \n");
		scanf("%f",&valor_prod);
	}
	printf("O valor total da sua compra = R$ %.2f", valor);
}
int main ()
{
	valor_total ();
	return 0;
}
