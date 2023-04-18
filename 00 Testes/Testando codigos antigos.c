#include <stdio.h>

int main()
{
    char nome[50];
    char sobrenome[50];
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    
    printf("Digite o seu sobrenome: ");
    scanf("%s", sobrenome);
    
    printf("(%s, %s)\n", sobrenome, nome);
    
    return 0;
}
