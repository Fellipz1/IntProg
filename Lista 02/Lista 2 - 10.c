// 10 - Fa�a um programa que leia um n�mero inteiro e positivo e verifique se este � ou n�o um n�mero primo. Teste seu programa com o valor: 7

#include <stdio.h>

int verificarPrimo(int numero) 
{
	int i;
    if (numero <= 1) 
	{
        return 0;  
    }

    for (i = 2; i * i <= numero; i++) 
	{
        if (numero % i == 0) 
		{
            return 0;  
        }
    }

    return 1;  
}

int main() 
{
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (verificarPrimo(numero)) 
	{
        printf("%d = Numero primo.\n", numero);
    } else 
	{
        printf("%d = nao eh um numero primo.\n", numero);
    }

    return 0;
}
