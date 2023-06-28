// 7) Fazer um programa para contar o número de vogais numa cadeia de caracteres.
// E
// 8) Refaça o programa anterior criando uma função que receberá como parâmetro a string e retornará o número de vogais que a string contém.

#include <stdio.h>

int contarVogais(char texto[])
{
    int i, vogais = 0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
        {
            vogais++;
        }
    }
  
    return vogais;
}

int main(void)
{
    char texto[100];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    int numVogais = contarVogais(texto);
    printf("O numero de vogais na string e: %d\n", numVogais);
  
    return 0;
}
