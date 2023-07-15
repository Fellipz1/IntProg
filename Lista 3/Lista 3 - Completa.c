/*1. Faça um programa principal que crie duas matrizes quadradas, com 4 linhas e 4 colunas, para armazenar valores reais. A primeira matriz deve ser preenchida com valores informados pelo
usuário. Desenvolva as funções abaixo para armazenar na segunda matriz, o conteúdo solicitado relativo à primeira matriz.

a) transposta (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe a transposta da primeira (linhas e colunas invertidas).

b) diagonal (float mat1[4][4], float mat2[4][4]): a diagonal principal de mat2 recebe a diagonal principal de mat1. Os demais elementos da segunda matriz devem ser nulos.

c) soma (float mat1[4][4], float mat2[4][4]): a segunda matriz recebe a soma da primeira matriz com ela mesma.

d) media (float mat1[4][4], float mat2[4][4]): a média dos valores de cada linha da primeira matriz é adicionada à respectiva linha da segunda matriz na posição da diagonal
principal. Exemplo: a média dos valores da linha 0 de mat1 é adicionada na posição [0][0] de mat2. A média da linha 1 é adicionada na posição [1][1] de mat2 etc..

e) maior_e_menor (float mat1[4][4], float mat2[4][4]): as linhas pares da segunda matriz são preenchidas com o maior elemento da primeira, da matriz ao passo que as linhas
ímpares recebem o menor elemento de mat1.

f) acima_da_media (float mat1[4][4], float mat2[4][4]): mat2 recebe apenas os elementos de mat1 cujo valor está acima da média dos valores da primeira matriz. As
demais posições não preenchidas de mat2, se existirem, devem receber 0.
*/
/*

#include <stdio.h>


void transposta(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz transposta:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matriz2[j][i] = matriz1[i][j];
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void diagonal(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz diagonal:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i == j)
			{
				matriz2[i][j] = matriz1[i][j];
			}
			else
			{
				matriz2[i][j] = 0;
			}
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void soma(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz soma:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matriz2[i][j] = matriz1[i][j] + matriz1[i][j];  
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}	
}
void media(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz media:\n");
	float soma;
    for(i = 0; i < 4; i++)
	{
        soma = 0.0;
        for(j = 0; j < 4; j++)
		{
            soma += matriz1[i][j];
        }
        matriz2[i][i] = soma / 4.0;
    }
    for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i != j){
				matriz2[i][j] = 0;
			}
		}
	}
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void maior_menor(float matriz1[4][4], float matriz2[4][4])
{
	int i, j;
	printf("\nMatriz com maior e menor valor:\n");
    float maior, menor;
    for(i = 0; i < 4; i++)
	{
        if(i%2 == 0)
		{
            maior = matriz1[i][0];
            for(j = 1; j < 4; j++)
			{
                if(matriz1[i][j] > maior)
				{
                    maior = matriz1[i][j];
				}
            }
            for(j = 0; j < 4; j++)
			{
                matriz2[i][j] = maior;
            }
        } 
		else
		{
        	menor = matriz1[i][0];
            for(j = 1; j < 4; j++)
			{
                if(matriz1[i][j] < menor);
                    menor = matriz1[i][j];
            }
            for(j = 0; j < 4; j++)
			{
            	matriz2[i][j] = menor;
            }
        }
    }	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
void acima_media(float matriz1[4][4], float matriz2[4][4])
{
    int i, j;
    float soma = 0.0;
    int cont = 0;

    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            soma += matriz1[i][j];
            cont++;
        }
    }

    float media = soma / cont;

    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            if (matriz1[i][j] > media) 
			{
                matriz2[i][j] = matriz1[i][j];
            } 
			else 
			{
                matriz2[i][j] = 0.0;
            }
        }
    }
   	printf("\nMedia da matriz 1 =%.2f\nMatriz acima da media:\n",media);
    for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz2[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	float matriz1[4][4];
	float matriz2[4][4];
	int i, j;
	printf("Preencha a matriz 1:\n");
	for(i = 0; i < 4; i++
	){
		for(j = 0; j < 4; j++)
		{
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz1[i][j]);			
		}
	}
	printf("\nMatriz original:\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%8.2f", matriz1[i][j]);
		}
		printf("\n");
	}	
	transposta(matriz1, matriz2);
	diagonal(matriz1, matriz2);
	soma(matriz1, matriz2);
	media(matriz1, matriz2);
	maior_menor(matriz1, matriz2);
	acima_media(matriz1, matriz2);
	return 0;
}
*/

/*2. Crie um tipo de dado denominado Vetor que representa uma estrutura chamada est_Vetor para representar um vetor de dimensões (coordenadas) x, y e z no espaço tridimensional: V (x, y, z).
Desenvolva uma função para calcular e retornar a soma de dois vetores A (xa, ya, za) e B (xb, yb, zb) e uma função para calcular e retornar a multiplicação de A pela coordenada de maior valor de B.
Faça um programa principal que leia do usuário as coordenadas dos dois vetores e que chame as duas funções citadas para imprimir os resultados retornados por elas.
*/
/*
#include <stdio.h>

typedef struct
{
	float x;
	float y;
	float z;	
} est_Vetor;
est_Vetor soma(est_Vetor A, est_Vetor B)
{
	est_Vetor soma;
	soma.x = A.x + B.x;
	soma.y = A.y + B.y;
	soma.z = A.z + B.z;
	return soma;
}
void multiplicacao(est_Vetor A, est_Vetor B)
{
	float maxCoord = B.x;
	if(B.y > maxCoord)
	{
		maxCoord = B.y;
	}
	if(B.z > maxCoord)
	{
		maxCoord = B.z;
	}
	float axb,ayb,azb;
	axb=(A.x * maxCoord);
	ayb=(A.y*maxCoord);
	azb=(A.z*maxCoord);
	printf("Multiplicacao dos vetores: x=%.2f , y=%.2f, z=%.2f", axb,ayb,azb);		
}
int main()
{
	est_Vetor A, B;
    printf("Digite as coordenadas do vetor A (x y z): ");
    scanf("%f %f %f", &A.x, &A.y, &A.z);
	printf("Digite as coordenadas do vetor B (x y z): ");
	scanf("%f %f %f", &B.x, &B.y, &B.z);
    est_Vetor Soma = soma(A, B);
    printf("A soma dos vetores: (%.2f, %.2f, %.2f)\n", Soma.x, Soma.y, Soma.z);
    multiplicacao(A, B);
    return 0;
}
*/

/* 3. Desenvolva uma função que receba como parâmetro duas variáveis da estrutura est_Data,
representada abaixo (tipo de dado Data):
typedef struct est_Data
{
int dia;
int mes;
int ano;
} Data;
Essa estrutura representa uma data válida e é composta por três valores inteiros: dia, mês e ano.
A função deve retornar o número de dias que separara uma data da outra.
*/
/*
#include <stdio.h>

typedef struct est_Data
{
	int dia;
	int mes;
	int ano;
} Data;
int anoBissexto(int ano)
{
	if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int dias(Data data1, Data data2)
{
    int totalDias = 0;

    int data1Antes = 1;
    if (data1.ano > data2.ano || (data1.ano == data2.ano && data1.mes > data2.mes) || (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia))
    {
        Data temp = data1;
        data1 = data2;
        data2 = temp;
        data1Antes = 0;
    }

    int diasAnoInicio = 0;
    int diasAnoFim = 0;
    int i;

    // Calcula o número de dias do ano de início até o final do ano
    for (i = data1.mes; i <= 12; i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasAnoInicio += 31;
                break;
            case 4: case 6: case 9: case 11:
                diasAnoInicio += 30;
                break;
            case 2:
                if (anoBissexto(data1.ano))
                    diasAnoInicio += 29;
                else
                    diasAnoInicio += 28;
                break;
        }
    }
    diasAnoInicio -= data1.dia;

    for (i = 1; i < data2.mes; i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasAnoFim += 31;
                break;
            case 4: case 6: case 9: case 11:
                diasAnoFim += 30;
                break;
            case 2:
                if (anoBissexto(data2.ano))
                    diasAnoFim += 29;
                else
                    diasAnoFim += 28;
                break;
        }
    }
    diasAnoFim += data2.dia;

    int anosCompletos = data2.ano - data1.ano - 1;
    int diasAnosCompletos = anosCompletos * 365;
    for (i = data1.ano + 1; i < data2.ano; i++)
    {
        if (anoBissexto(i))
            diasAnosCompletos++;
    }

    totalDias = diasAnoInicio + diasAnoFim + diasAnosCompletos;

    if (data1Antes)
        return totalDias;
    else
        return -totalDias;
}
int main()
{
	Data data1, data2;
	printf("Digite a primeira data (dd/mm/aaaa): \n");
	printf("Digite o dia: \n");
	scanf("%d", &data1.dia);
	printf("Digite o mes: \n");
	scanf("%d", &data1.mes);	
	printf("Digite o ano: \n");
	scanf("%d", &data1.ano);
	printf("Digite a segunda data (dd/mm/aaaa): \n");
	printf("Digite o dia: \n");
	scanf("%d", &data2.dia);
	printf("Digite o mes: \n");
	scanf("%d", &data2.mes);	
	printf("Digite o ano: \n");
	scanf("%d", &data2.ano);
	int total = dias(data1, data2);
	printf("Numero de dias entre as datas: %d\n", total);
	
	return 0;
}
*/

/* 4. Elabore uma estrutura composta por três matrizes quadradas de dimensões iguais a 4 e dois vetores de tamanho igual a 16. 
No programa principal, faça a leitura de uma matriz 4x4 e armazenea na primeira matriz da estrutura. A seguir, desenvolva funções realizar as seguintes tarefas:

a) armazenar na segunda matriz da estrutura, a transposta da matriz lida;

b) armazenar na terceira matriz da estrutura, a matriz lida multiplicada pelo seu elemento de maior valor;

c) armazenar no primeiro vetor da estrutura, de forma sequencial (linha por linha), a matriz lida;

d) armazenar no segundo vetor da estrutura, o resultado do produto da matriz lida por sua transposta.
*/
/*
#include <stdio.h>

typedef struct{
	int matriz1[4][4];
	int matriz2[4][4];
	int matriz3[4][4];
	int vetor1[16];
	int vetor2[16];
} Matrizes;
void transposta(Matrizes matrizes)
{
	int i, j;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matrizes.matriz2[i][j] = matrizes.matriz1[j][i];
		}
	}
		printf("Matriz transposta:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%5d", matrizes.matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void multiplicacao(Matrizes matrizes)
{
	int i, j;
	int maior = 0;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(matrizes.matriz1[i][j] > maior){
				maior = matrizes.matriz1[i][j];
			}
		}
	}
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			matrizes.matriz3[i][j] = maior * matrizes.matriz1[i][j];
		}
	}
	printf("Matriz multiplicada pelo maior valor:\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%5d", matrizes.matriz3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void vetorMatriz(Matrizes matrizes)
{
	int i, j;
	int k = 0;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matrizes.vetor1[k] = matrizes.matriz1[i][j];
			k++;
		}
	}
	printf("Vetor matriz:\n");
	for(i = 0; i < 16; i++)
	{
		printf("%d ", matrizes.vetor1[i]);
	}
	printf("\n");
}
void vetorMult(Matrizes matrizes)
{
	int i, j;
	int k = 0;
	int produto;
	for(i = 0; i < 4; i++)
	{
        for(j = 0; j < 4; j++)
		{
            matrizes.vetor2[k] = matrizes.matriz1[i][j] * matrizes.matriz2[i][j];
        	k++;
		}
        
    }
    printf("Vetor multiplicacao de matrizes:\n");
	for(i = 0; i < 16; i++)
	{
		printf("%d ", matrizes.vetor2[i]);
	}
	printf("\n");
}
int main()
{
	int i, j;
	Matrizes matrizes;	
	printf("Digite os elementos da primeira matriz:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Elemento[%d][%d]: ", i+1, j+1);
			scanf("%d", &matrizes.matriz1[i][j]);
		}
	}
	printf("Matriz principal:\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%5d", matrizes.matriz1[i][j]);
		}
		printf("\n");
	}
	
	transposta(matrizes);
	multiplicacao(matrizes);
	vetorMatriz(matrizes);
	vetorMult(matrizes);
		
	return 0;
}
*/

/* 5. O sistema de uma biblioteca online deve ser capaz de procurar um dado livro pelo o seu título ou por parte dele. Dessa forma, desenvolva um programa para registrar 6 livros no sistema.  
O programa deve solicitar ao usuário o título (ou parte dele) do livro a ser buscado e imprimir o resultado da busca com todos os dados do livro em questão. 
Cada livro é armazenado com o seu título (máximo de 50 caracteres), autor (máximo de 30 caracteres), código e preço.
*/
/*
#include <stdio.h>

#define MAX_TITULO 50
#define MAX_AUTOR 30
#define MAX_LIVROS 6
typedef struct
{
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int codigo;
    float preco;
} Livro;
void registrarLivros(Livro livros[])
{
	int i;
    printf("Registro de livros\n");
    for(i = 0; i < MAX_LIVROS; i++)
	{
        printf("\nLivro %d\n", i + 1);
        printf("Titulo: ");
        fgets(livros[i].titulo, MAX_TITULO, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
        printf("Autor: ");
        fgets(livros[i].autor, MAX_AUTOR, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
        printf("Codigo: ");
        scanf("%d", &livros[i].codigo);
        printf("Preco: ");
        scanf("%f", &livros[i].preco);
        getchar();
    }
}
void procurarLivro(Livro livros[], char procurarTitulo[])
{
    int encontrado = 0;
    int i;
    printf("\nResultado da busca pelo titulo '%s':\n", procurarTitulo);
    for(i = 0; i < MAX_LIVROS; i++)
	{
        if(strstr(livros[i].titulo, procurarTitulo) != NULL)
		{
            printf("\nLivro %d\n", i + 1);
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Codigo: %d\n", livros[i].codigo);
            printf("Preco: R$ %.2f\n", livros[i].preco);
            encontrado = 1;
        }
    }
    if(!encontrado)
	{
        printf("Nenhum livro encontrado com o titulo '%s'.\n", procurarTitulo);
    }
}
int main()
{
    Livro livros[MAX_LIVROS];
    char procurarTitulo[MAX_TITULO];
    registrarLivros(livros);
    printf("\nDigite o titulo (ou parte dele) do livro a ser buscado: ");
    fgets(procurarTitulo, MAX_TITULO, stdin);
    procurarTitulo[strcspn(procurarTitulo, "\n")] = '\0';
    procurarLivro(livros, procurarTitulo);
    return 0;
}
*/

/* 6. Um quadrado mágico é uma matriz quadrada, de valores inteiros, na qual a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos da diagonal primária e
da diagonal secundária são iguais. A matriz quadrada de ordem 4 abaixo é um exemplo de quadrado mágico, no qual todas as somas são iguais a 34:
Desenvolva um programa que leia do usuário uma matriz quadrada de ordem n e imprima se a matriz é um quadrado mágico ou não.
*/	
/*
#include <stdio.h>

int main()
{
	int n;
	printf("Digite o tamanho da matriz quadrada: ");
	scanf("%d", &n);
	int matriz[100][100];
	int i, j;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("Elemento[%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	int somaDiagonalPrimaria = 0;
	int somaDiagonalSecundaria = 0;
	int somaLinha;
	int somaColuna;
	for(i = 0; i < n; i++)
	{
		somaDiagonalPrimaria += matriz[i][i];
		somaDiagonalSecundaria += matriz[i][n - i - 1]; 
	}
	for(i = 0; i < n; i ++)
	{
		somaLinha = 0;
		somaColuna = 0;
		for(j = 0; j < n; j++)
		{
			somaLinha += matriz[i][j];
			somaColuna += matriz[j][i];
		}
		if(somaLinha != somaDiagonalPrimaria || somaColuna != somaDiagonalPrimaria)
		{
			printf("A matriz nao eh um quadrado magico.\n");
			return 0;
		}
	}
	if(somaDiagonalPrimaria != somaDiagonalSecundaria)
	{
		printf("A matriz nao eh um quadrado magico.\n");
	}
	else
	{
		printf("A matriz eh um quadrado magico.\n");
	}
	
	return 0;
}
*/

/* 7. A matriz triangular abaixo é conhecida como triângulo de Pascal:
Note que cada elemento dessa matriz é composto pela soma do elemento antecessor com o elemento imediatamente acima. Outra forma de representação do triângulo de Pascal encontra-se abaixo:

Observe que cada elemento dessa matriz é composto pela soma do elemento imediatamente acima com o antecessor do elemento imediatamente acima.

Crie duas funções para impressão do triângulo de Pascal, sendo uma função para imprimi-lo deacordo com a Figura 1 e outra função para imprimi-lo de acordo com a Figura 2. Essas funções 
devem utilizar matrizes para cálculo dos elementos do triângulo de Pascal e devem receber o número de linhas da matriz por parâmetro. Note que a matriz em questão é uma matriz quadrada.
Crie um método principal para receber do usuário o número de linhas da matriz. Esse método deve chamar as duas funções de impressão de triângulo de Pascal criadas anteriormente.
*/
/*
#include <stdio.h>
void imprimirTrianguloPascal1(int linhas)
{
    int triangulo[linhas][linhas];
   	int i,j;
    for(i = 0; i < linhas; i++)
	{
        triangulo[i][0] = 1;
	}
    for(i = 1; i < linhas; i++)
	{
        for(j = 1; j <= i; j++)
		{
            triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
        }
    }
    for(i = 0; i < linhas; i++)
	{
        for(j = 0; j <= i; j++)
		{
            printf("%5d", triangulo[i][j]);
        }
        printf("\n");
    }
}
void imprimirTrianguloPascal2(int linhas)
{
	int i,j;
    int triangulo[linhas][linhas];
    for(i = 0; i < linhas; i++)
	{
        triangulo[0][i] = 1;
    }
    for(i = 1; i < linhas; i++)
	{
        for(j = 0; j < linhas-i; j++)
		{
            triangulo[i][j] = triangulo[i-1][j] + triangulo[i-1][j+1];
        }
    }
    for(i = 0; i < linhas; i++)
	{
        for(j = 0; j < linhas-i; j++)
		{
            printf("%5d", triangulo[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int linhas;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Triangulo 1:\n");
    imprimirTrianguloPascal1(linhas);
    printf("\nTriangulo 2:\n");
    imprimirTrianguloPascal2(linhas);
    
    return 0;
}
*/

/* 8. Faça uma função que receba uma string e um caractere e retorna o número de vezes que o caractere aparece na string.
*/
/*
#include <stdio.h>

int encontrarChar(char string[], char caractere)
{
    int vezes = 0;
    int i;
    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == caractere) 
		{
            vezes++;
        }
    }
    return vezes;
}

int main()
{
    char string[100];
    char caractere;
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int retorno = encontrarChar(string, caractere);

    if (retorno != 0) 
	{
        printf("O numero de vezes que o caractere %c aparece %d vezes na string %s", caractere, retorno, string);
    } else 
	{
        printf("O caractere %c não aparece na string %s\n", caractere, string);
    }

    return 0;
}
*/

/* 9. Elabore uma função que receba duas strings, strA e strB, e o tamanho alocado para ambas, t. A função deve completar a string strA com os caracteres da string strB sem que o tamanho máximo da
string seja ultrapassado. Exemplo: se strA="ABC", strB="XYWZ" e t=6, ao final da função, devese ter strA="ABCXY".
*/
/*
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
*/

/* 10. Escreva uma função que receba uma string e um caractere e retorne qual a última posição na string em que o caractere aparece. Se o caracter não estiver na string, a função deve retornar -1.
*/
/*
#include <stdio.h>

int encontrarChar(char string[], char caractere)
{
    int vezes = 0;
    int i1;
    int i=0;
    for (i = 0; string[i] != '\0'; i++) 
	{
        if (string[i] == caractere) 
		{
            i1=i;
        }
    }
    return i1;
}

int main()
{
    char string[100];
    char caractere;
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int retorno = encontrarChar(string, caractere);

    printf("A ultima vez que o caracter %c aparece por ultimo na posicao %d, da string %s", caractere, retorno, string);

    return 0;
}
*/

/* 11. Escreva uma função que retorne o número de espaços em branco contidos em uma string passada como parâmetro.
*/
/*
#include <stdio.h>

int contarEspacos(char texto[])
{
    int i, espacos = 0;
  
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == ' ') 
        {
            espacos++;
        }
    }
  
    return espacos;
}

int main(void)
{
    int tamanho =60;
    char texto[tamanho];
  
    printf("Digite uma string: ");
    fgets(texto, tamanho, stdin);

    int numEspacos = contarEspacos(texto);
    printf("O espaco aparece %d vezes na sua string.\n", numEspacos);
  
    return 0;
}
*/

/* 12. Faça uma função que recebe como parâmetros duas strings, strA e strB, e um número inteiro k. A função deve copiar os k primeiros caracteres de strB para strA de forma invertida. Se k for maior
que o tamanho da string, toda a string strB deverá aparecer invertida em strA. Assuma que as duas strings foram alocadas com o mesmo tamanho. Exemplo: se strB="ABCDE" e k=3, a string strA 
deverá receber "CBA". Se strB="ABCDE" e k=10, a string strA deverá receber "EDCBA".
*/
/*
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
*/

/* 13. Elabore uma função que receba uma string e um caractere e remova toda ocorrência do caractere na string.
*/
/*
#include <stdio.h>
#include <string.h>

void removerChar(char string[], char caractere) 
{
    int i, j;
    int tamanho = strlen(string);
    
    for (i = 0, j = 0; i < tamanho; i++) 
	{
        if (string[i] != caractere) 
		{
            string[j] = string[i];
            j++;
        }
    }
    
    string[j] = '\0';
}

int main() 
{
    char string[100];
    char caractere;
    
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    removerChar(string, caractere);

    printf("String resultante: %s\n", string);

    return 0;
}
*/

/* 14. Crie uma função que receba uma frase e a exiba na tela de forma soletrada, ou seja, cada letra deve ser exibida na tela separada por hífen.
*/
/*
#include <stdio.h>
#include <string.h>

void soletrarFrase(const char frase[]) 
{
    int tamanho = strlen(frase);
    int i;
    
    for (i = 0; i < tamanho; i++) 
	{
        printf("%c-", frase[i]);
    }
}

int main() 
{
	int tamanho = 100;
    char frase[tamanho];
    
    printf("Digite uma frase: ");
    fgets(frase, tamanho, stdin);
    frase[strcspn(frase, "\n")] = '\0'; 
    
    soletrarFrase(frase);

    return 0;
}
*/

/* 15. Crie uma função que receba uma string de no máximo 50 caracteres e inverta a ordem da string digitada;
Exemplo:
Entrada: Teste
Saída: etseT
*/
/*
#include <stdio.h>
#include <string.h>

void inverterString(char string[]) 
{
    int tamanho = strlen(string);
    int i, j;
    
    for (i = 0, j = tamanho - 1; i < j; i++, j--) 
	{
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main() 
{
    int tamanho = 50;
    char string[tamanho];
        
    printf("Digite a string: ");
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    
    inverterString(string);
    
    printf("String invertida: %s\n", string);

    return 0;
}
*/

/* 16. Na eleição para o representante dos alunos da sala, apareceram quatro candidatos: Ana, Ari, Eva e Ivan. Faça uma função que receba o número de alunos presentes no dia da eleição e leia o nome
do candidato em que cada aluno votou. Ao final, exiba o número de votos que cada candidato obteve. Observe que eventuais erros de grafia no nome digitado por um eleitor indicam voto nulo.
*/
/*
int contaVotos(int total) 
{
    int votosAna=0;
	int votosAri=0;
	int votosEva=0; 
	int votosIvan=0; 
	int votosNulo = 0;
    char voto[10];
    int i;
    
    for (i = 0; i < total; i++) 
	{
        printf("Digite o nome de acordo com o seu voto:");
        scanf(" %[^\n]", voto);
        
        if (strcmp(voto,"Ana") == 0)
		{
            votosAna++;
            printf("Votou na Ana\n");
		}
        if (strcmp(voto,"Ari") == 0)
		{
            votosAri++;
            printf("Votou na Ari\n");
		}
        if (strcmp(voto,"Eva") == 0)
		{
            votosEva++;
            printf("Votou na Eva\n");
		}
        if (strcmp(voto,"Ivan") == 0){
        	
            votosIvan++;
            printf("Votou na Ivan\n");
		}
        if (strcmp(voto,"Ana") != 0 && strcmp(voto,"Ari") != 0 && strcmp(voto,"Eva") != 0 &&strcmp(voto,"Ivan") != 0 )
            votosNulo++;
        
	}	
        printf("Votos:\n");
        printf("Ana: %d votos\n", votosAna);
        printf("Ari: %d votos\n", votosAri);
        printf("Eva: %d votos\n", votosEva);
        printf("Ivan: %d votos\n\n", votosIvan);
        printf("NULO: %d votos\n", votosNulo);
    
    return 0;
}

int main()
{
    int total = 0;
    printf("Quantos alunos presentes?");
    scanf("%d", &total);
    printf("\nCANDIDATOS:  Ana, Ari, Eva e Ivan\n");
    contaVotos(total);
    
    return 0;
}
*/

/* 17. Uma empresa deseja desenvolver um sistema que contém os dados de seus funcionários. O cadastro de cada um deles deve conter os seguintes campos: nome, endereço, telefone, e-mail, data
de aniversário (dia, mês e ano) e o ano de chegada à empresa. Desenvolva um sistema para executar cada uma das seguintes ações:

a) Ler a quantidade de funcionários (o usuário digitará a quantidade);

b) Cadastrar os funcionários;

c) Imprimir uma lista com os dias de nascimento dos funcionários nascidos em um mês desejado;

d) Imprimir o nome e o telefone dos funcionários com uma quantidade específica de anos de empresa;
*/
/*
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome[100];
    char endereco[100];
    char telefone[25];
    char email[50];
    int dia;
    int mes;
    int ano;
    int ano_de_entrada;
} Funcionario;

void cadastrarFuncionarios(int quantidade, Funcionario funcionarios[]) {
    int i;
    for (i = 0; i < quantidade; i++) {
        printf("Cadastro do funcionario %d:\n", i + 1);

        printf("Digite o nome completo do funcionario: ");
        fflush(stdin);
        fgets(funcionarios[i].nome, 100, stdin);

        printf("Digite o endereco: ");
        fflush(stdin);
        fgets(funcionarios[i].endereco, 100, stdin);

        printf("Informe o telefone: ");
        fflush(stdin);
        fgets(funcionarios[i].telefone, 25, stdin);

        printf("Informe o e-mail: ");
        fflush(stdin);
        fgets(funcionarios[i].email, 50, stdin);

        printf("Digite a data de aniversario:\n");
        printf("Dia: ");
        scanf("%d", &funcionarios[i].dia);

        printf("Mes: ");
        scanf("%d", &funcionarios[i].mes);

        printf("Ano: ");
        scanf("%d", &funcionarios[i].ano);

        printf("Ano de entrada na empresa: ");
        scanf("%d", &funcionarios[i].ano_de_entrada);
    }
}

void imprimirDiasNascimento(int quantidade, Funcionario funcionarios[], int mes) {
    printf("Funcionarios com aniversario no mes %d:\n", mes);
    int i;
    for (i = 0; i < quantidade; i++) {
        if (funcionarios[i].mes == mes) {
            printf("%s - Dia: %d\n", funcionarios[i].nome, funcionarios[i].dia);
        }
    }
}

void imprimirFuncionariosAnosEmpresa(int quantidade, Funcionario funcionarios[], int anos) {
    time_t now;
    struct tm *data_atual;
    time(&now);
    data_atual = localtime(&now);
    int ano_atual = data_atual->tm_year + 1900;

    printf("Funcionarios com %d anos de empresa:\n", anos);
    int i;
    for (i = 0; i < quantidade; i++) {
        int anos_empresa = ano_atual - funcionarios[i].ano_de_entrada;
        if (anos_empresa == anos) {
            printf("Nome: %s - Telefone: %s\n", funcionarios[i].nome, funcionarios[i].telefone);
        }
    }
}

int main() {
    int quantidade;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quantidade);

    Funcionario funcionarios[quantidade];

    cadastrarFuncionarios(quantidade, funcionarios);

    int mes;
    printf("\nDigite o mes desejado para listar os funcionarios com aniversario: ");
    scanf("%d", &mes);
    imprimirDiasNascimento(quantidade, funcionarios, mes);

    int anos;
    printf("\nDigite a quantidade de anos de empresa desejada: ");
    scanf("%d", &anos);
    imprimirFuncionariosAnosEmpresa(quantidade, funcionarios, anos);

    return 0;
}
*/

/* 18. Faça um programa que permita o cadastro de veículos. A estrutura veículos deverá conter os campos placa, marca, modelo e ano. Faça um menu com as seguintes opções:
Menu:
1 - Cadastrar as informações de um veículo
2 - Verificar se uma placa está no formato correto (AAADDDD) (A são letras e D são dígitos)
3 - Imprimir por ano
4 - Pesquisar veículo por placa
5 - Imprimir todos os veículos cadastrados
	• O programa deverá ter as seguintes características:
		-> No terceiro item, peça o ano mínimo e máximo e imprima os veículos que estão nesse intervalo.
		-> No item 4 deve retornar o índice do veículo caso ele seja encontrado e -1 caso contrário
		-> O programa principal deve cadastrar 5 veículos. Crie um vetor com 20 posições para que seja possível o cadastro de outros.
		-> Faça funções para realizar as operações de cada um dos itens do menu.
*/
/*
#include <stdio.h>
#include <string.h>
#define Max_veiculos 20

typedef struct 
{
    char placa[8];
    char marca[50];
    char modelo[50];
    int ano;
} Veiculo;

int numVeiculos = 0;
Veiculo veiculos[Max_veiculos];

void cadastrarVeiculo() 
{
    if (numVeiculos >= Max_veiculos) 
	{
        printf("Limite de veiculos cadastrados atingido.\n");
        return;
    }

    Veiculo novoVeiculo;
    printf("Digite a placa do veiculo (formato AAADDDD): ");
    scanf("%s", novoVeiculo.placa);

    printf("Digite a marca do veiculo: ");
    scanf(" %[^\n]", novoVeiculo.marca);

    printf("Digite o modelo do veiculo: ");
    scanf(" %[^\n]", novoVeiculo.modelo);

    printf("Digite o ano do veiculo: ");
    scanf("%d", &novoVeiculo.ano);

    veiculos[numVeiculos++] = novoVeiculo;
    printf("Veiculo cadastrado com sucesso.\n");
}

int verificarPlacaFormato(char placa[]) 
{
    int i;

    if (strlen(placa) != 7) 
	{
        return 0;
    }

    for (i = 0; i < 3; i++) 
	{
        if (!(placa[i] >= 'A' && placa[i] <= 'Z')) 
		{
            return 0;
        }
    }

    for (i = 3; i < 7; i++) 
	{
        if (!(placa[i] >= '0' && placa[i] <= '9')) 
		{
            return 0;
        }
    }

    return 1;
}

void imprimirPorAno() 
{
    int anoMin, anoMax;
    int i;

    printf("Digite o ano minimo: ");
    scanf("%d", &anoMin);

    printf("Digite o ano maximo: ");
    scanf("%d", &anoMax);

    printf("Veiculos cadastrados entre %d e %d:\n", anoMin, anoMax);
    for (i = 0; i < numVeiculos; i++) 
	{
        if (veiculos[i].ano >= anoMin && veiculos[i].ano <= anoMax) 
		{
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("----------------------\n");
        }
    }
}

int pesquisarPorPlaca(char placa[]) 
{
    int i;

    for (i = 0; i < numVeiculos; i++) 
	{
        if (strcmp(veiculos[i].placa, placa) == 0) 
		{
            return i;
        }
    }

    return -1;
}

void imprimirTodosVeiculos() 
{
    int i;

    printf("Veiculos cadastrados:\n");
    for (i = 0; i < numVeiculos; i++) 
	{
        printf("Placa: %s\n", veiculos[i].placa);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Ano: %d\n", veiculos[i].ano);
        printf("----------------------\n");
    }
}

int main() 
{
    int opcao;
    char placa[8];
    int indice;

    do {
        printf("Menu:\n");
        printf("1 - Cadastrar as informacoes de um veiculo\n");
        printf("2 - Verificar se uma placa esta no formato correto (AAADDDD)\n");
        printf("3 - Imprimir por ano\n");
        printf("4 - Pesquisar veiculo por placa\n");
        printf("5 - Imprimir todos os veiculos cadastrados\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) 
		{
            case 1:
                cadastrarVeiculo();
                break;
            case 2:
                printf("Digite a placa para verificar o formato: ");
                scanf("%s", placa);
                if (verificarPlacaFormato(placa)) 
				{
                    printf("Placa no formato correto.\n");
                } 
				else 
				{
                    printf("Placa no formato incorreto.\n");
                }
                break;
            case 3:
                imprimirPorAno();
                break;
            case 4:
                printf("Digite a placa do veiculo para pesquisar: ");
                scanf("%s", placa);
                indice = pesquisarPorPlaca(placa);
                if (indice != -1) 
				{
                    printf("Veiculo encontrado no indice %d.\n", indice);
                } 
				else 
				{
                    printf("Veiculo nao encontrado.\n");
                }
                break;
            case 5:
                imprimirTodosVeiculos();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }

        printf("----------------------\n");
    } while (opcao != 0);

    return 0;
}
*/
