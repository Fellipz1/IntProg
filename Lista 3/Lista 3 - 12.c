/* 12. Faça uma função que recebe como parâmetros duas strings, strA e strB, e um número inteiro k. A função deve copiar os k primeiros caracteres de strB para strA de forma invertida. Se k for maior
que o tamanho da string, toda a string strB deverá aparecer invertida em strA. Assuma que as duas strings foram alocadas com o mesmo tamanho. Exemplo: se strB="ABCDE" e k=3, a string strA 
deverá receber "CBA". Se strB="ABCDE" e k=10, a string strA deverá receber "EDCBA".
*/

#include <stdio.h>
#include <string.h>

void copiarStringInvertida(char strA[], char strB[], int k) 
{
    int tamanhoB = strlen(strB);
    
    if (k > tamanhoB) 
	{
        k = tamanhoB;  
    }
    
    int i, j;
    for (i = 0, j = k - 1; i < k; i++, j--) 
	{
        strA[i] = strB[j];
    }
    
    strA[i] = '\0';  
}

int main() 
{
    char strA[100];
    char strB[100];
    int k;
    
    printf("Digite a string B: ");
    fgets(strB, 100, stdin);
    strB[strcspn(strB, "\n")] = '\0';  
    
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    
    copiarStringInvertida(strA, strB, k);
    
    printf("String A: %s\n", strA);

    return 0;
}
