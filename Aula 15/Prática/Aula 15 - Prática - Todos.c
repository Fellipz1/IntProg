// 11) Fazer uma função para imprimir uma string recebida como parâmetro sem os espaços em branco. Para isso, a string não deve ser modificada.
/*
#include <stdio.h>

void imprimirStringSemEspacos(char texto[]) 
{
    int i = 0;
    while (texto[i] != '\0') 
	{
        if (texto[i] != ' ') 
		{
            printf("%c", texto[i]);
        }
        i++;
    }
    printf("\n");
}

int main() 
{
    char texto[50];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    printf("String original: %s\n", texto);
    printf("String sem espacos: ");
    imprimirStringSemEspacos(texto);

    return 0;
}
*/

// 12) Fazer uma função que leia uma string do teclado (máx. 50 caracteres) e imprima uma “estatística” dos caracteres digitados. Isto é, 
// imprima a quantidade de vogais, a quantidade de consoantes e a quantidade de outros caracteres.
/*
#include <stdio.h>
void estatistica(char texto[])
{
    int i, vogais = 0, consoantes = 0, caracter=0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
        {
            vogais++;
        } else if (texto[i] == 'b'||texto[i] == 'c'||texto[i] == 'd'||texto[i] == 'f'||texto[i] == 'g'||texto[i] == 'h'||texto[i] == 'i'||
			texto[i] == 'j'||texto[i] == 'k'||texto[i] == 'l'||texto[i] == 'm'||texto[i] == 'n'||texto[i] == 'p'||texto[i] == 'q'||texto[i] == 'r'||
			texto[i] == 's'||texto[i] == 't'||texto[i] == 'v'||texto[i] == 'w'||texto[i] == 'x'||texto[i] == 'y'||texto[i] == 'z'||texto[i] == 'B'||
			texto[i] == 'C'||texto[i] == 'D'||texto[i] == 'F'||texto[i] == 'G'||texto[i] == 'H'||texto[i] == 'I'||texto[i] == 'J'||texto[i] == 'K'||
			texto[i] == 'L'||texto[i] == 'M'||texto[i] == 'N'||texto[i] == 'P'||texto[i] == 'Q'||texto[i] == 'R'||texto[i] == 'S'||texto[i] == 'T'||
			texto[i] == 'V'||texto[i] == 'W'||texto[i] == 'X'||texto[i] == 'Y'||texto[i] == 'Z')
    		{
    			consoantes++;
			}
		else 
		{
			caracter++;
		}
	}
  	
    printf("O numero de vogais na string e: %d\n", vogais);
    printf("O numero de consoantes na string e: %d\n", consoantes);
    printf("O numero de caracteres na string e: %d\n", caracter);

}
int main(void)
{
    char texto[50];
  
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
  	
  	estatistica(texto);
  	
    return 0;
}
*/

// 13) Fazer um programa para ler uma string e transferir as consoantes para um vetor e as vogais para outro. Ao final, imprima cada um dos vetores.
/*
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
*/

// 14) Faça uma função que receba uma string do usuário (máx. 20 caracteres) e um caractere qualquer. A função deverá colocar um 
// espaço branco em todas as ocorrências do caractere da string e retornar o número de trocas que foram realizadas.
/*
#include <stdio.h>

int inserirEspacos(char string[], char caractere) 
{
    int i;
    int trocas = 0;

    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == caractere) 
		{
            string[i] = ' ';
            trocas++;
        }
    }

    return trocas;
}

int main() 
{
    char minhaString[21];
    char caractere;

    printf("Digite uma cadeia de caracteres (maximo de 20 caracteres): ");
    fgets(minhaString, sizeof(minhaString), stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int numTrocas = inserirEspacos(minhaString, caractere);

    printf("String modificada: %s\n", minhaString);
    printf("Numero de trocas realizadas: %d\n", numTrocas);

    return 0;
}
*/

// 15) Escreva uma função que receba uma cadeia de caracteres de tamanho máximo 100, e retornar 1 se esta cadeia é palíndrome e zero 
// caso contrário. Uma palavra é dita ser palíndrome se a sequência de seus caracteres da esquerda para a direita é igual a sequência de 
// seus caracteres dadireita para a esquerda. Ex.: arara, asa, ovo...
/*
#include <stdio.h>
#include <string.h> // A biblioteca string.h é frequentemente usada para fornecer várias funções para manipulação de strings em C. 

int verificarPalindromo(const char string[]) 
{
    int i = 0;
    int j = strlen(string) - 1; // da biblioteca string.h

    while (i < j) 
	{
        if (string[i] != string[j]) 
		{
            return 0; 
        }
        i++;
        j--;
    }

    return 1; 
}

int main() 
{
    char minhaString[101];

    printf("Digite uma cadeia de caracteres: ");
    fgets(minhaString, sizeof(minhaString), stdin);

    minhaString[strcspn(minhaString, "\n")] = '\0';

    if (verificarPalindromo(minhaString)) 
	{
        printf("E um palindromo!\n");
    } else 
	{
        printf("Nao e um palindromo!\n");
    }

    return 0;
}
*/

// 16) Um dos sistemas de encriptação mais antigos é atribuído a Júlio César: se uma letra a ser criptografada é a letra de número N do alfabeto, substitua-a com a 
// letra (N+K), onde K é um número inteiro constante (César utilizava K = 3).
// Dessa forma, para K = 1 a mensagem
// “Adoro programar em C”
//		se torna
// “Bepsp!qsphsbnbs!fn!D”.
// Faça um programa que receba como entrada uma mensagem e um valor de K e altere a mensagem criptografando-a pelo código de César.
/*
#include <stdio.h>

void criptografarCesar(char mensagem[], int k) {
    int i;

    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = ((mensagem[i] - 'A' + k) % 26) + 'A';
        } else if (mensagem[i] >= 'a' && mensagem[i] <= 'z') {
            mensagem[i] = ((mensagem[i] - 'a' + k) % 26) + 'a';
        }
    }
}

int main() 
{
    char mensagem[100];
    int k;

    printf("Digite a mensagem a ser criptografada: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite o valor de K: ");
    scanf("%d", &k);

    criptografarCesar(mensagem, k);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
*/
