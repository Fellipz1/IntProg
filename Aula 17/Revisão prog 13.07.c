/* 1) Crie um programa que leia uma matriz 3x3 de inteiros positivos e imprime a quantidade de números pares e a quantidade de números ímpares de cada linha.
*/
/*
#include<stdio.h>
int main ()
{
	int i,j, m=3, n=3;
	int matriz [m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Elemento[%d][%d] = \n",i+1,j+1);
			scanf("%d",&matriz [i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		int numPares = 0, numImpares = 0;
		for(j=0;j<n;j++)
		{
			if(matriz[i][j] % 2 == 0)
			{
				numPares++;
			}
			else
			{
				numImpares++;
			}
		}
		printf("O numero pares na linha %d = %d\nO numero de impares na linha %d = %d\n",i+1, numPares, i+1, numImpares);
	}
			
	return 0;
}
*/

/* 2) Implemente um programa que leia duas strings, str1 e str2,e um valor inteiro positivo N. 
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.
Depois de concatenar verifique se há vogais nas posições ímpares.
*/
/*
#include <stdio.h>
#include <string.h>

int possuiVogaisImpares(char str[]) 
{
    int tamanho = strlen(str);
    int i;
    
    for (i = 0; i < tamanho; i += 2) 
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || \c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        {
            return 1;
        }
    }
    
    return 0;
}

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
    
	if (possuiVogaisImpares(strA)) 
	{
        printf("A string resultante possui vogais nas posicoes impares.\n");
    } 
	else 
	{
        printf("A string resultante nao possui vogais nas posicoes impares.\n");
    }
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
*/


/* 3) Crie uma estrutura Contato que contenha nome, idade, telefone, e-mail. Leia as informações de 4 pessoas e imprima as da  pessoa mais velha.
*/
/*
#include <stdio.h>
typedef struct 
	{
		char nome[50];
		float idade;
		char email[50];
		char telefone[25];
	}pessoas;
int main()
{
	pessoas p1[4];
    int i, j;
    int maisvelho=0;
    
	for(i = 0; i < 4; i++)
	{
    printf("Cadastro de contato: \n");
  
	printf("Informe o seu nome: ");
	fflush(stdin);
	fgets(p1[i].nome, 50, stdin);
  
	printf("Informe a sua idade: ");
	scanf("%f", &p1[i].idade);
	
	printf("Informe seu e-mail: ");
	fflush(stdin);
	fgets(p1[i].email, 50, stdin);
  
	printf("Informe o seu telefone: ");
	fflush(stdin);
	fgets(p1[i].telefone, 25, stdin);
  
		if (p1[i].idade > p1[maisvelho].idade) 
		{
        maisvelho = i;
        }
    }
  
    printf("\nPessoa mais velha:\n");
    printf("Nome: %s", p1[maisvelho].nome);
    printf("Idade: %.0f\n", p1[maisvelho].idade);
    printf("Email: %s", p1[maisvelho].email);
    printf("Telefone: %s\n", p1[maisvelho].telefone);
	return(0);
}
*/
