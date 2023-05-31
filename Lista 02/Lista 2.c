// Lista 2 
// Fellipe de S� Moraes - Inicio: 26/05/2023 - Fim: 

// 1 - Fa�a uma fun��o que receba dois n�meros X e Y, sendo X < Y. Calcule e imprima:
// � a soma de n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados;
// � a multiplica��o de n�meros �mpares desse intervalo, incluindo os digitados;

// Falta fazer a soma e a maaultiplica��o 
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

// 2 - Escreva um programa que pergunte ao usu�rio quantos alunos t�m na sala dele. Em seguida, crie uma fun��o que receba essa quantidade de alunos e pe�a ao 
// usu�rio para que entre com as notas de todos os alunos da sala, uma por vez. A fun��o deve retornar a m�dia das notas dos alunos.

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

// 3 - Escreva uma fun��o que receba os valores n1, n2 e x como par�metros, e imprima os m�ltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente. 
// Exemplo: se os valores lidos forem n1=1, n2=7 e x=3, a sa�da dever� ser 3 6 .

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

// 4 - Escreva um algoritmo que imprima todos os n�meros de 1000 a 1999 que divididos por 11 d�o resto igual a 5.

/*
#include <stdio.h>

int main() {
    printf("Numeros de 1000 a 1999 que divididos por 11 t�m resto igual a 5:\n");
    
    for (int i = 1000; i <= 1999; i++) {
        if (i % 11 == 5) {
            printf("%d,", i);
        }
    }
    
    return 0;
}
*/

// 5 - Escreva uma fun��o que imprime todos os divisores de um n�mero inteiro passado por par�metro.

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


// 6 - Elabore uma fun��o que receba como par�metros dois valores reais a e b. A fun��o deve ler uma sequ�ncia de valores reais e imprimir a m�dia aritm�tica dos valores que pertencerem ao intervalo
// fechado entre a e b. A sequ�ncia de valores dever� ser encerrada quando for lido um valor negativo.
// Exemplo: Com entradas a=7, b=3 e sequ�ncia= 5 2 9 8 3 1 -2, a fun��o deve imprimir o valor 4.


// 7 - Escreva uma fun��o que receber� um n�mero n que indicar� a quantidade de n�meros inteiros positivos que devem ser lidos a seguir. A fun��o deve imprimir uma tabela de n linhas onde cada
// linha deve conter um dos valores inteiros lidos seguido de seu dobro, seu quadrado e seu fatorial.
// OBS: inicialmente fa�a o c�lculo do fatorial dentro da pr�pria fun��o. Exemplo: se os valores lidos forem 2 3 5, a sa�da dever� ter 2 linhas na tabela, com x=3 e x=5:

// 8 - Escreva uma fun��o que leia valores e calcule a m�dia aritm�tica dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos 
// e o percentual de valores negativos e positivos. Imprima os resultados. O n�mero que encerrar� a leitura ser� zero.

// 9 - Fa�a um programa que leia uma sequ�ncia de n�meros positivos. Calcule a quantidade de n�meros pares e �mpares, 
// a m�dia de valores pares e a m�dia geral dos n�meros lidos. O n�mero que encerrar� a leitura ser� zero.

// 10 - Fa�a um programa que leia um n�mero inteiro e positivo e verifique se este � ou n�o um n�mero primo. Teste seu programa com o valor: 7

// 11 - Escreva uma fun��o que recebe um valor N inteiro e positivo e que retorna a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
// A fun��o deve imprimir cada termo gerado e o valor final de S.

// 12 - Escreva uma fun��o que recebe um valor N inteiro e positivo e que calcula o valor aproximado
// de PI considerando N termos na equa��o: PI = 4 ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... )
// A fun��o deve imprimir a express�o (com cada termo utilizado no c�lculo) e o resultado obtido.

// 13 - Escreva uma fun��o que receba um vetor de valores reais e seu tamanho e retorne quantos destes valores s�o negativos.

// 14 - Implemente uma fun��o que receba um vetor de inteiros e seu tamanho e retorne o maior elemento do vetor.

// 15 - Implemente uma fun��o que receba um vetor de inteiros e seu tamanho e ordene-o.

// 16 - Elabore uma fun��o que recebe por par�metro um vetor de inteiros e o seu tamanho e retorna a soma de seus elementos.

// 17 - Implemente uma fun��o que receba um vetor de inteiros, seu tamanho e um valor x e retorne o �ndice da primeira posi��o do vetor que cont�m o valor x. Se o valor x n�o estiver no vetor, a fun��o deve retornar o valor -1.

// 18 - Implemente uma fun��o que, dados um vetor de valores reais e seu tamanho, retorne a m�dia dos valores armazenados.

// 19 - Escreva uma fun��o que receba um vetor de valores reais e seu tamanho e leia valores do teclado para preencher todo o vetor apenas com valores positivos. Observe que valores negativos
// devem ser ignorados e a leitura deve ser encerrada assim que a �ltima posi��o do vetor for preenchida. 
