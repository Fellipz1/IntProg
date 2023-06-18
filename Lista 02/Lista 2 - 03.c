// 3 - Escreva uma função que receba os valores n1, n2 e x como parâmetros, e imprima os múltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente. 
// Exemplo: se os valores lidos forem n1=1, n2=7 e x=3, a saída deverá ser 3 6 .

#include <stdio.h>

void intervalo(int n1, int n2, int num)
{
	int i;
	
	for (i = n1; i<=n2 ; i++)
	{
	if (i%num==0)
	{
        printf("%d ", i);
	}
	}
}

int main()
{
    int n1, n2, num;

    printf("Digite o valor de n1: \n");
    scanf("%d", &n1);

    printf("Digite o valor de n2: \n");
    scanf("%d", &n2);
    
    printf("Digite o numero que voce quer os multiplos do intervalo: \n");
    scanf("%d",&num);

    printf("Intervalo fechado: ");
    intervalo(n1, n2, num);

    return 0;
}
