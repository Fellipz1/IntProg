// 5 - Escreva uma função que imprime todos os divisores de um número inteiro passado por parâmetro.

#include <stdio.h>

void divisores(int numero) 
{
	int cont;
	
    printf("Divisores de %d:\n", numero);
    
    for (cont = 1; cont <= numero; cont++) 
	{
        if (numero % cont == 0) {
            printf("%d,", cont);
        }
    }
}

int main() 
{
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    divisores(numero);
    
    return 0;
}
