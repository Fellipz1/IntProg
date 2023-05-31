// Lista 2 
// Fellipe de Sá Moraes - Inicio: 26/05/2023 - Fim: 

// 1 - Faça uma função que receba dois números X e Y, sendo X < Y. Calcule e imprima:
// – a soma de números pares desse intervalo de números, incluindo os números digitados;
// – a multiplicação de números ímpares desse intervalo, incluindo os digitados;

// Falta fazer a soma e a maaultiplicação 
/*
#include <stdio.h>

void parImpar (int x, int y)
{
	int par = 0;
	int impar = 0; 
	int cont=x;

	while(x < y && cont <= y)
	{
		if(cont%2!=0)
		{
			impar ++; 
			cont++;
		}
		else
		{ 
			par ++;
			cont ++; 
		}
	}

	printf ("Numeros impares = %d\n",impar);
	printf ("Numeros pares = %d\n",par);
}

int main()
{
	int x, y;

	printf("Digite um valor para x: ");
	scanf("%d", &x);

	printf("Digite um valor para y: ");
	scanf("%d", &y);

	parImpar(x,y);
	
	return 0;
}
*/

// 2 - Escreva um programa que pergunte ao usuário quantos alunos têm na sala dele. Em seguida, crie uma função que receba essa quantidade de alunos e peça ao 
// usuário para que entre com as notas de todos os alunos da sala, uma por vez. A função deve retornar a média das notas dos alunos.

/*
#include <stdio.h>

float calcularMedia(int quantidadeAlunos) {
    float somaNotas = 0;
    float nota;
    
    for (int cont = 1; cont <= quantidadeAlunos; cont++) {
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);
        somaNotas += nota;
    }
    
    float media = somaNotas / quantidadeAlunos;
    return media;
}

int main() {
    int quantidadeAlunos;
    
    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &quantidadeAlunos);
    
    float media = calcularMedia(quantidadeAlunos);
    
    printf("A media da nota dos alunos = %.2f\n", media);
    
    return 0;
}
*/

// 3 - Escreva uma função que receba os valores n1, n2 e x como parâmetros, e imprima os múltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente. 
// Exemplo: se os valores lidos forem n1=1, n2=7 e x=3, a saída deverá ser 3 6 .

/*
#include <stdio.h>

void n1aten2(int n1, int n2, int num)
{
	for (int i = n1; i<=n2 ; i++)
	{
	if (i%num==0)
	{
        printf("%d ", i);
	}
	}
}

int main()
{
    int n1, n2, num;

    printf("Digite o valor de n1: \n");
    scanf("%d", &n1);

    printf("Digite o valor de n2: \n");
    scanf("%d", &n2);
    
    printf("Digite o numero que voce quer os multiplos do intervalo: \n");
    scanf("%d",&num);

    printf("Intervalo fechado: ");
    n1aten2(n1, n2, num);

    return 0;
}
*/

// 4 - Escreva um algoritmo que imprima todos os números de 1000 a 1999 que divididos por 11 dão resto igual a 5.

/*
#include <stdio.h>

int main() {
    printf("Numeros de 1000 a 1999 que divididos por 11 têm resto igual a 5:\n");
    
    for (int i = 1000; i <= 1999; i++) {
        if (i % 11 == 5) {
            printf("%d,", i);
        }
    }
    
    return 0;
}
*/

// 5 - Escreva uma função que imprime todos os divisores de um número inteiro passado por parâmetro.

/*
#include <stdio.h>

void Divisores(int numero) {
    printf("Divisores de %d:\n", numero);
    
    for (int cont = 1; cont <= numero; cont++) {
        if (numero % cont == 0) {
            printf("%d,", cont);
        }
    }
}

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    Divisores(numero);
    
    return 0;
}
*/


// 6 - Elabore uma função que receba como parâmetros dois valores reais a e b. A função deve ler uma sequência de valores reais e imprimir a média aritmética dos valores que pertencerem ao intervalo
// fechado entre a e b. A sequência de valores deverá ser encerrada quando for lido um valor negativo.
// Exemplo: Com entradas a=7, b=3 e sequência= 5 2 9 8 3 1 -2, a função deve imprimir o valor 4.


// 7 - Escreva uma função que receberá um número n que indicará a quantidade de números inteiros positivos que devem ser lidos a seguir. A função deve imprimir uma tabela de n linhas onde cada
// linha deve conter um dos valores inteiros lidos seguido de seu dobro, seu quadrado e seu fatorial.
// OBS: inicialmente faça o cálculo do fatorial dentro da própria função. Exemplo: se os valores lidos forem 2 3 5, a saída deverá ter 2 linhas na tabela, com x=3 e x=5:

// 8 - Escreva uma função que leia valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos 
// e o percentual de valores negativos e positivos. Imprima os resultados. O número que encerrará a leitura será zero.

// 9 - Faça um programa que leia uma sequência de números positivos. Calcule a quantidade de números pares e ímpares, 
// a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.

// 10 - Faça um programa que leia um número inteiro e positivo e verifique se este é ou não um número primo. Teste seu programa com o valor: 7

// 11 - Escreva uma função que recebe um valor N inteiro e positivo e que retorna a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
// A função deve imprimir cada termo gerado e o valor final de S.

// 12 - Escreva uma função que recebe um valor N inteiro e positivo e que calcula o valor aproximado
// de PI considerando N termos na equação: PI = 4 ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... )
// A função deve imprimir a expressão (com cada termo utilizado no cálculo) e o resultado obtido.

// 13 - Escreva uma função que receba um vetor de valores reais e seu tamanho e retorne quantos destes valores são negativos.

// 14 - Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne o maior elemento do vetor.

// 15 - Implemente uma função que receba um vetor de inteiros e seu tamanho e ordene-o.

// 16 - Elabore uma função que recebe por parâmetro um vetor de inteiros e o seu tamanho e retorna a soma de seus elementos.

// 17 - Implemente uma função que receba um vetor de inteiros, seu tamanho e um valor x e retorne o índice da primeira posição do vetor que contém o valor x. Se o valor x não estiver no vetor, a função deve retornar o valor -1.

// 18 - Implemente uma função que, dados um vetor de valores reais e seu tamanho, retorne a média dos valores armazenados.

// 19 - Escreva uma função que receba um vetor de valores reais e seu tamanho e leia valores do teclado para preencher todo o vetor apenas com valores positivos. Observe que valores negativos
// devem ser ignorados e a leitura deve ser encerrada assim que a última posição do vetor for preenchida. 
