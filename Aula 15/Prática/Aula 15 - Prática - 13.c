// 13) Fazer um programa para ler uma string e transferir as consoantes para um vetor e as vogais para outro. Ao final, imprima cada um dos vetores.

#include <stdio.h>

int main() 
{
    char string[100];
    char consoantes[100];
    char vogais[100];
    int i, j, k;
    i = j = k = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    while (string[i] != '\0') {
        if (string[i] >= 'A' && string[i] <= 'Z') 
		{
            string[i] = string[i] + 32; // mudei de maiscula pra miniscula de acordo com a tabela 
        }

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') 
		{
            vogais[j] = string[i];
            j++;
        } else if ((string[i] >= 'a' && string[i] <= 'z')) 
		{
            consoantes[k] = string[i];
            k++;
        }

        i++;
    }

    vogais[j] = '\0';
    consoantes[k] = '\0';

    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", consoantes);

    return 0;
}
