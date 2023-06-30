// 9) Escrever um programa que leia uma string (com mais de uma palavra) e fa�a com  que a primeira letra de cada palavra fique em mai�scula. Para isso, basta 
// modificar cada letra atrav�s da express�o: chrNome[0] = chrNome[0] � 'a' + 'A';
// Exemplo: Entrada: lab. de linguagem de programacao
// Sa�da: Lab. De Linguagem De Programacao

#include <stdio.h>
#include <ctype.h>

void converterPrimeiraLetraMaiuscula(char texto[])
{
    int i;

    // Converte a primeira letra da string em mai�scula
    texto[0] = toupper(texto[0]);

    // Converte a primeira letra de cada palavra em mai�scula
    for (i = 1; texto[i] != '\0'; i++)
    {
        if (texto[i - 1] == ' ')
        {
            texto[i] = toupper(texto[i]);
        }
    }
}

int main(void)
{
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    converterPrimeiraLetraMaiuscula(texto);

    printf("Texto com as primeiras letras em maiuscula: %s\n", texto);

    return 0;
}
