// 7 - Escreva uma função que receberá um número n que indicará a quantidade de números inteiros positivos que devem ser lidos a seguir. A função deve imprimir uma tabela de n linhas onde cada
// linha deve conter um dos valores inteiros lidos seguido de seu dobro, seu quadrado e seu fatorial.
// OBS: inicialmente faça o cálculo do fatorial dentro da própria função. Exemplo: se os valores lidos forem 2 3 5, a saída deverá ter 2 linhas na tabela, com x=3 e x=5:

#include<stdio.h>

int calcularFatorial(int n) 
{
    int fatorial = 1;
    int i;
    for (i = 1; i <= n; i++) 
	{
        fatorial *= i;
    }
    
    return fatorial;
}

void imprimirTabela(int n) 
{
    int numero;
    int i;

    printf("Digite %d numeros inteiros positivos:\n", n);
    
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &numero);
        
        long long fatorial = calcularFatorial(numero);

        printf("%d\t%d\t%d\t%lld\n", numero, numero * 2, numero * numero, fatorial);
    }
}

int main() 
{
    int n;
    
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);
    
    imprimirTabela(n);

    return 0;
}
