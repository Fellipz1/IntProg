// 7) Fazer um programa para contar o n�mero de vogais numa cadeia de caracteres.
// E
// 8) Refa�a o programa anterior criando uma fun��o que receber� como par�metro a string e retornar� o n�mero de vogais que a string cont�m.

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
