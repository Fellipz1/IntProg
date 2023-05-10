// Fa�a o teste de mesa com entrada 2 e com entrada -1.
/*
#include<stdio.h>
int main()
{
	int numImpressoes, contador;
	
	printf("Quantas vezes a impressao deve ser feita?");
	scanf("%d",&numImpressoes);
	
	contador = 0;
	
	while( contador < numImpressoes)
	{
		printf("Faca o teste de mesa dos exercicios\n");
		contador++; //soma 1 � vari�vel
	}
	
	return 0;
}
*/

// Teste de mesa
/*
Linha	|	numImpressao	|	contador	|	teste de condi��o
	2	|		?			|		?		|			?
	4	|		?			|		?		|			?
	6	|		?			|		?		|			?				//Imprime: Quantas vezes a impressao deve ser feita?
	7	|		2			|		?		|			?
	9	|		2			|		0		|			?
	11	|		2			|		0		|			V
	13	|		2			|		0		|			V				//Imprime: Faca o teste de mesa dos exercicios
	14	|		2			|		1		|			V
	11	|		2			|		1		|			V
	13	|		2			|		1		|			V				//Imprime: Faca o teste de mesa dos exercicios
	14	|		2			|		2		|			V
	11	|		2			|		2		|			F
	17		
	
Linha	|	numImpressao	|	contador	|	teste de condi��o
	2	|		?			|		?		|			?
	4	|		?			|		?		|			?
	6	|		?			|		?		|			?				//Imprime: Quantas vezes a impressao deve ser feita?
	7	|		-1			|		?		|			?
	9	|		-1			|		0		|			?
	11	|		-1			|		0		|			F
	17	
*/

// Fa�a o teste de mesa com 2 times. Considerando para o 1� 1V,0E e 0D e para o 2� 2V,1E e 1D.
/*
#include<stdio.h>
void imprimePontosNoCamopeonato (int numTimes)
{
	int cont, vitorias, empates, derrotas;
	
	printf("\nPara cada time, digite o numero ");
	printf("de vitorias, empates e derrotas: ");
	
	cont = 0;
	while( cont < numTimes){
		printf("\nTime %d:", cont + 1);
		scanf("%d%d%d", &vitorias, &empates, &derrotas);
		printf("Total: %d pontos",(3 * vitorias) + (1 * empates));
		cont ++;
	}	
}
int main ()
{
	int times;
	printf("\nDigite o numero de times:");
	scanf("%d", &times);
	imprimePontosNoCampeonato(times);	
	return 0;
}
*/
// Teste de mesa
/*
Linha	|	times	|	numTimes	|	cont	|vitorias 	| empates 	| derrotas 	| condi��es
	18	|	?		|		?		|	?		|	?		|	?		|	?		|	?
	21	|	?		|		?		|	?		|	?		|	?		|	?		|	?		//Imprime: Digite o numero de times: 
	22	|	2		|		2		|	?		|	?		|	?		|	?		|	?
	2	|	2		|		2		|	?		|	?		|	?		|	?		|	?	
	4	|	2		|		2		|	?		|	?		|	?		|	?		|	?
	6	|	2		|		2		|	?		|	?		|	?		|	?		|	?		//Imprime: Para cada time, digite o numero 
	7	|	2		|		2		|	?		|	?		|	?		|	?		|	?		//Imprime: de vitorias, empates e derrotas: 
	9	|	2		|		2		|	0		|	?		|	?		|	?		|	?
	10	|	2		|		2		|	0		|	?		|	?		|	?		|	V
	11	|	2		|		2		|	1		|	?		|	?		|	?		|	V		//Imprime: Time 1
	12	|	2		|		2		|	1		|	1		|	0		|	0		|	V
	13	|	2		|		2		|	1		|	1		|	0		|	0		|	V		//Imprime: Total: 3 pontos
	15	|	2		|		2		|	2		|	?		|	?		|	?		|	V		
	10	|	2		|		2		|	2		|	?		|	?		|	?		|	V
	11	|	2		|		2		|	2		|	?		|	?		|	?		|	V		//Imprime: Time 2
	12	|	2		|		2		|	2		|	2		|	1		|	1		|	V
	13	|	2		|		2		|	2		|	2		|	1		|	1		|	V		//Imprime: Total: 4 pontos 
	15	|	2		|		2		|	3		|	?		|	?		|	?		|	V		
	10	|	2		|		2		|	3		|	?		|	?		|	?		|	F
	24		
*/

// 1 - a) Escreva um programa que leia a nota de um aluno cujo valor est� entre 0 e 100. O programa deve escrever �REPROVADO� se a nota for inferior a 70 e escrever �APROVADO�, caso contr�rio.
// b) Reescreva o programa para que ele repita a leitura e impress�o para um grupo de alunos. A quantidade de notas lidas � desconhecida. O programa deve ser encerrado se for lido um valor inv�lido (fora do intervalo entre 0 e 100). Teste seu programa com a sequ�ncia: 87 59 94 108
// c) Reescreva o programa para que o usu�rio comece informando o n�mero de alunos. Neste caso, a quantidade de notas lidas deve ser igual ao n�mero informado. Teste seu programa com: 3 64 92 31

// C�digo a 
/*
#include<stdio.h>
void nota()
{
	int nota;
	printf("Digite a nota do aluno: \n");
	scanf("%d", &nota);
	
	if(nota>=70 && nota<101)
	{
		printf("Aprovado");
	}
	else if (nota < 70 && nota>=0)
	{
		printf("Reprovado");
	}
		else{
			printf("Nota invalida");
		}
}
int main ()
{
	nota();
	return 0;	
}
*/

// c�digo b
/*
#include <stdio.h>

void situacao(float nota) 
{
    while (nota>=0 && nota<=100) {
        
    	if(nota>=70 && nota<101)
		{
			printf("Aprovado\n");
			break;
		}
		if (nota < 70 && nota>=0)
		{
			printf("Reprovado\n");
			break;
		}
    }
}

int main()
{
	int valor=1;
	float nota;
	   
    while (valor!=0)
    {
    	printf("Digite 0 para fechar o programa e 1 para continuar \n");
    	scanf("%d", &valor);
    	
    	if(valor == 1){
    		printf("Digite a nota do aluno: \n");
   			scanf("%f", &nota);
			situacao(nota);
		}
		else {
			break;
		}
	}
    return 0;
}
*/

// codigo c
/*
#include <stdio.h>

void situacao(float nota) 
{
    while (nota>=0 && nota<=100) {
        
    	if(nota>=70 && nota<101)
		{
			printf("Aprovado\n");
			break;
		}
		if (nota < 70 && nota>=0)
		{
			printf("Reprovado\n");
			break;
		}
    }
}

int main()
{
	int valor=0, cont=0;
	float nota;
	
	printf("Digite quantas notas voce precisa: \n");
    scanf("%d", &valor);
	   
    while (cont<valor)
    {
    	printf("Digite a nota do aluno: \n");
 		scanf("%f", &nota);
		situacao(nota);
	
		cont++;
	}
    return 0;
}
*/

// 2 - 
/*
		|main	|	funcao		|	
Linha	|	a	|	a	|	b	|	Condicao1	|	Condicao 2
	13	|	?	|	?	|	?	|				|				|
	15	|	4	|	?	|	?	|				|				|
	2	|		|	4	|	?	|				|				|		//Imprime: Quantas vezes a impressao deve ser feita?
	3	|		|	4	|	1	|				|				|
	4	|		|	4	|	1	|		V		|				|
	5	|		|	4	|	1	|				|		F		|
	9	|		|	4	|	2	|				|				|		//Imprime: Faca o teste de mesa dos exercicios
	4	|		|	4	|	2	|		V		|				|
	5	|		|	4	|	2	|				|		F		|
	9	|		|	4	|	3	|				|				|		//Imprime: Faca o teste de mesa dos exercicios
	4	|		|	4	|	3	|		V		|				|
	5	|		|	4	|	3	|				|		V		|
	9	|		|	4	|	4	|				|				|
	4	|		|	4	|	4	|		F		|				|
*/

// 3 - a) Escreva uma fun��o que recebe um n�mero inteiro n como par�metro e imprime a tabuada de n. Por exemplo, se n for 3, a fun��o deve imprimir as linhas do quadro � direita.
// b) Fa�a um programa que leia um valor inteiro do teclado e use a fun��o da letra a para imprimir a tabuada deste n�mero.
// c) Reescreva o programa para que ele imprima a tabuada de todo valor inteiro que o usu�rio digitar. O programa dever� ser encerrado quando o usu�rio digitar o valor zero.
// d) Reescreva o programa para que ele imprima a tabuada de todo valor inteiro de 1 a 9.

#include <stdio.h>

// Fun��o para imprimir a tabuada de um n�mero inteiro n
void tabuada(int n) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main() {
    int valor;
    while (1) {
        printf("Digite um valor inteiro (ou 0 para sair): ");
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        tabuada(valor);
    }
    return 0;
}


