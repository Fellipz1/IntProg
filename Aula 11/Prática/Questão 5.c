// 5- Escrever um fun��o que l� um valor N inteiro e positivo 
// e que calcula e escreve o valor de E. Fa�a um programa 
// para testar sua fun��o. E = 1 + 1/2 + 1/3 + ... + 1/N

#include <stdio.h>

float soma()
{
	int n, i;
	float soma;
	
	printf("Digite um valor inteiro positivo: \n");
	scanf("%d",&n);
	i=0;
	if(n<0 && n==0)
	{
		printf("Digite um valor valido");
	}
	else 
	{
		do 
		{
		soma += (float) 1/n;
			
		n--;
		
		}while(n>i);	
	}
	return soma;
}
int main()
{
	float valores;
	valores = soma();
	printf("A soma = %.2f", valores);
	return 0; 
}
