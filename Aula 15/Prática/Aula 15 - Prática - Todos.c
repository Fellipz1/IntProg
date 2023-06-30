// 11) Fazer uma fun��o para imprimir uma string recebida como par�metro sem os espa�os em branco. Para isso, a string n�o deve ser modificada.
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

// 12) Fazer uma fun��o que leia uma string do teclado (m�x. 50 caracteres) e imprima uma �estat�stica� dos caracteres digitados. Isto �, 
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

// 14) Fa�a uma fun��o que receba uma string do usu�rio (m�x. 20 caracteres) e um caractere qualquer. A fun��o dever� colocar um 
// espa�o branco em todas as ocorr�ncias do caractere da string e retornar o n�mero de trocas que foram realizadas.
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

// 15) Escreva uma fun��o que receba uma cadeia de caracteres de tamanho m�ximo 100, e retornar 1 se esta cadeia � pal�ndrome e zero 
// caso contr�rio. Uma palavra � dita ser pal�ndrome se a sequ�ncia de seus caracteres da esquerda para a direita � igual a sequ�ncia de 
// seus caracteres dadireita para a esquerda. Ex.: arara, asa, ovo...
/*
#include <stdio.h>
#include <string.h> // A biblioteca string.h � frequentemente usada para fornecer v�rias fun��es para manipula��o de strings em C. 

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

// 16) Um dos sistemas de encripta��o mais antigos � atribu�do a J�lio C�sar: se uma letra a ser criptografada � a letra de n�mero N do alfabeto, substitua-a com a 
// letra (N+K), onde K � um n�mero inteiro constante (C�sar utilizava K = 3).
// Dessa forma, para K = 1 a mensagem
// �Adoro programar em C�
//		se torna
// �Bepsp!qsphsbnbs!fn!D�.
// Fa�a um programa que receba como entrada uma mensagem e um valor de K e altere a mensagem criptografando-a pelo c�digo de C�sar.
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
