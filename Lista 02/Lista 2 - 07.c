// 7 - Escreva uma fun��o que receber� um n�mero n que indicar� a quantidade de n�meros inteiros positivos que devem ser lidos a seguir. A fun��o deve imprimir uma tabela de n linhas onde cada
// linha deve conter um dos valores inteiros lidos seguido de seu dobro, seu quadrado e seu fatorial.
// OBS: inicialmente fa�a o c�lculo do fatorial dentro da pr�pria fun��o. Exemplo: se os valores lidos forem 2 3 5, a sa�da dever� ter 2 linhas na tabela, com x=3 e x=5:

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
