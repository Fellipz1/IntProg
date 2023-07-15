/* 9. Elabore uma função que receba duas strings, strA e strB, e o tamanho alocado para ambas, t. A função deve completar a string strA com os caracteres da string strB sem que o tamanho máximo da
string seja ultrapassado. Exemplo: se strA="ABC", strB="XYWZ" e t=6, ao final da função, devese ter strA="ABCXY".
*/

#include <stdio.h>
#include <string.h>

void completarStr(char strA[], char strB[], int tamanho) 
{
    int tamanhoA = strlen(strA);
    int tamanhoB = strlen(strB);
    
    if (tamanhoA + tamanhoB >= tamanho) 
	{
        int maxtamanhoB = tamanho - tamanhoA - 1;
        strB[maxtamanhoB] = '\0';
    }
    
    strcat(strA, strB);
    printf("String A completa: %s\n", strA);
}

int main() 
{
    int tamanho = 0;
    printf("Digite o tamanho da sua string: \n");
    scanf("%d", &tamanho);
    
    char strA[tamanho];
    char strB[tamanho];
    
    printf("Digite a sua string A: \n");
    scanf("%s", strA);
    
    printf("Digite a sua string B: \n");
    scanf("%s", strB);
    
    completarStr(strA, strB, tamanho);
    
    return 0;
}
