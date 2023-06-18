// Lista 2 
// Fellipe de Sá Moraes - Inicio: 26/05/2023 - Fim: 18/06/2023

// 1 - Faça uma função que receba dois números X e Y, sendo X < Y. Calcule e imprima:
// – a soma de números pares desse intervalo de números, incluindo os números digitados;
// – a multiplicação de números ímpares desse intervalo, incluindo os digitados;

/*
#include <stdio.h>

void parImpar (int x, int y)
{
    int somaPares = 0;
    int multiplicacaoImpares = 1;
	int i=x;
	
 	for (i = x; i <= y; i++) 
	{
        if (i % 2 == 0) 
		{
            somaPares += i;
        } 
		else 
		{
            multiplicacaoImpares *= i;
        }
    }

    printf("A soma dos numeros pares no intervalo [%d, %d] = %d\n", x, y, somaPares);
    printf("A multiplicação dos numeros impares no intervalo [%d, %d] = %d\n", x, y, multiplicacaoImpares);
}
int main()
{
	int x, y;

	printf("Digite um valor para x: ");
	scanf("%d", &x);

	printf("Digite um valor para y (maior que x): ");
	scanf("%d", &y);

	parImpar(x,y);
	
	return 0;
}
*/

// 2 - Escreva um programa que pergunte ao usuário quantos alunos têm na sala dele. Em seguida, crie uma função que receba essa quantidade de alunos e peça ao 
// usuário para que entre com as notas de todos os alunos da sala, uma por vez. A função deve retornar a média das notas dos alunos.

/*
#include <stdio.h>

float calcularMedia(int quantidadeAlunos) 
{
    float somaNotas = 0;
    float nota;
    int cont;
    
    for (cont = 1; cont <= quantidadeAlunos; cont++) 
	{
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);
        somaNotas += nota;
    }
    
    float media = somaNotas / quantidadeAlunos;
    return media;
}

int main() 
{
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

int main() 
{
    printf("Numeros de 1000 a 1999 que divididos por 11 têm resto igual a 5:\n");
    
    for (int i = 1000; i <= 1999; i++) 
	{
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

void divisores(int numero) 
{
    printf("Divisores de %d:\n", numero);
    
    for (int cont = 1; cont <= numero; cont++) 
	{
        if (numero % cont == 0) 
		{
            printf("%d,", cont);
        }
    }
}

int main() 
{
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    divisores(numero);
    
    return 0;
}
*/


// 6 - Elabore uma função que receba como parâmetros dois valores reais a e b. A função deve ler uma sequência de valores reais e imprimir a média aritmética dos valores que pertencerem 
// ao intervalo fechado entre a e b. A sequência de valores deverá ser encerrada quando for lido um valor negativo.
// Exemplo: Com entradas a=7, b=3 e sequência= 5 2 9 8 3 1 -2, a função deve imprimir o valor 4.

/*
#include <stdio.h>

void media_intervalo(float a, float b) 
{
    float valor, soma = 0.0;
    int quantidade = 0;
    int validos = 0;

	printf("Para parar digite um numero negativo, apos digitar a sequencia!!!!\n");
    printf("Digite o valor 1: ");
    scanf("%f", &valor);
	if (b>a){
		while (valor >= 0) {
        if (valor <= b && valor >= a ) 
		{
            soma += valor;
            validos++;
        }
        quantidade++;

        printf("Digite o valor %d: ", quantidade+1);
        scanf("%f", &valor);
    	}
	}
    else 
	{
    	while (valor >= 0) 
		{
        if (valor >= b && valor <= a ) 
		{
            soma += valor;
            validos++;
        }
        quantidade++;

        printf("Digite um valor: ");
        scanf("%f", &valor);
    	}
	}

    if (validos > 0) 
	{
        float media = soma / validos;
        printf("A media dos valores no intervalo [%.2f, %.2f] = %.2f\n", a, b, media);
    } else 
	{
        printf("Nao foram digitados valores no intervalo [%.2f, %.2f]\n", a, b);
    }
}

int main() 
{
    float a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    media_intervalo(a, b);

    return 0;
}
*/

// 7 - Escreva uma função que receberá um número n que indicará a quantidade de números inteiros positivos que devem ser lidos a seguir. A função deve imprimir uma tabela de n linhas onde cada
// linha deve conter um dos valores inteiros lidos seguido de seu dobro, seu quadrado e seu fatorial.
// OBS: inicialmente faça o cálculo do fatorial dentro da própria função. Exemplo: se os valores lidos forem 2 3 5, a saída deverá ter 2 linhas na tabela, com x=3 e x=5:

/*
#include<stdio.h>

int calcularFatorial(int n) 
{
    int fatorial = 1;
    int i;
    for (i = 1; i <= n; i++) 
	{
        fatorial *= i;
    }
    
    return fatorial;
}

void imprimirTabela(int n) 
{
    int numero;
    int i;

    printf("Digite %d numeros inteiros positivos:\n", n);
    
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &numero);
        
        long long fatorial = calcularFatorial(numero);

        printf("%d\t%d\t%d\t%lld\n", numero, numero * 2, numero * numero, fatorial);
    }
}

int main() 
{
    int n;
    
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);
    
    imprimirTabela(n);

    return 0;
}
*/

// 8 - Escreva uma função que leia valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos 
// e o percentual de valores negativos e positivos. Imprima os resultados. O número que encerrará a leitura será zero.

/*
#include <stdio.h>

void calcularEImprimirEstatisticas() 
{
    int valor;
    int soma = 0;
    int quantidadePositivos = 0;
    int quantidadeNegativos = 0;
    int quantidadeTotal = 0;

    printf("Digite os valores (encerrando com 0):\n");

    do 
	{
        scanf("%d", &valor);

        if (valor > 0) 
		{
            quantidadePositivos++;
        } else if (valor < 0) 
		{
            quantidadeNegativos++;
        }

        soma += valor;
        quantidadeTotal++;
    } while (valor != 0);

    float media = (float) soma / (quantidadeTotal - 1); // para excluir o zero

    printf("\n");
    printf("Resultado:\n");
    printf("Media: %.2f\n", media);
    printf("Quantidade de valores positivos: %d\n", quantidadePositivos);
    printf("Quantidade de valores negativos: %d\n", quantidadeNegativos);

    float percentualPositivos = (float) quantidadePositivos / (quantidadeTotal - 1) * 100;
    float percentualNegativos = (float) quantidadeNegativos / (quantidadeTotal - 1) * 100;

    printf("Percentual de valores positivos: %.2f%%\n", percentualPositivos);
    printf("Percentual de valores negativos: %.2f%%\n", percentualNegativos);
}

int main() 
{
    calcularEImprimirEstatisticas();
    return 0;
}
*/

// 9 - Faça um programa que leia uma sequência de números positivos. Calcule a quantidade de números pares e ímpares, 
// a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.

/*
#include <stdio.h>

void calcularEImprimirEstatisticas() 
{
    int valor;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int somaPares = 0;
    int quantidadeTotal = 0;
    float mediaGeral, mediaPares;

    printf("Digite valores positivos (encerre com 0):\n");

    do 
	{
        scanf("%d", &valor);

        if (valor % 2 == 0 && valor != 0) 
		{
            quantidadePares++;
            somaPares += valor;
        } else if (valor != 0) 
		{
            quantidadeImpares++;
        }

        quantidadeTotal++;
    } while (valor != 0);

    mediaGeral = (float)somaPares / quantidadeTotal;
    mediaPares = (float)somaPares / quantidadePares;

    printf("\n");
    printf("Resultado:\n");
    printf("Quantidade de numeros pares: %d\n", quantidadePares);
    printf("Quantidade de numeros impares: %d\n", quantidadeImpares);
    printf("Media de valores pares: %.2f\n", mediaPares);
    printf("Media geral dos numeros lidos: %.2f\n", mediaGeral);
}

int main() 
{
    calcularEImprimirEstatisticas();
    return 0;
}
*/

// 10 - Faça um programa que leia um número inteiro e positivo e verifique se este é ou não um número primo. Teste seu programa com o valor: 7

/*
#include <stdio.h>

int verificarPrimo(int numero) 
{
	int i;
    if (numero <= 1) 
	{
        return 0;  
    }

    for (i = 2; i * i <= numero; i++) 
	{
        if (numero % i == 0) 
		{
            return 0;  
        }
    }

    return 1;  
}

int main() 
{
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (verificarPrimo(numero)) 
	{
        printf("%d = Numero primo.\n", numero);
    } else 
	{
        printf("%d = nao eh um numero primo.\n", numero);
    }

    return 0;
}
*/

// 11 - Escreva uma função que recebe um valor N inteiro e positivo e que retorna a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
// A função deve imprimir cada termo gerado e o valor final de S.

/*
#include <stdio.h>

float calcularSoma(int n) 
{
	int i;
    float soma = 0.0;

    if (n <= 0) {
        printf("Digite um valor inteiro positivo.\n");
        return soma;
    }

    printf("Termos gerados:\n");
    for (i = 1; i <= n; i++) {
        float termo = 1.0 / i;
        soma += termo;
        printf("1/%d = %.2f\n", i, termo);
    }

    return soma;
}

int main() 
{
    int n;
    float resultado;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    resultado = calcularSoma(n);

    printf("Valor final da soma = %.2f\n", resultado);

    return 0;
}
*/

// 12 - Escreva uma função que recebe um valor N inteiro e positivo e que calcula o valor aproximado
// de PI considerando N termos na equação: PI = 4 ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... )
// A função deve imprimir a expressão (com cada termo utilizado no cálculo) e o resultado obtido.

/*
#include <stdio.h>

float calculaPI(int N) 
{
    float pi = 0.0;
    int sinal = -1;
    int i;

    if (N <= 0) {
        printf("Digite um valor inteiro positivo.\n");
        return pi;
    }

    printf("Termos utilizados:\n");

    for (i = 0; i < N; i++) {
        int divisor = 2 * i + 1;
        float termo = 1.0 / divisor * sinal;
        pi += termo;
        sinal *= -1;
        printf("%s (%.2f/%d) ", (i == 0 ? "4 * " : (sinal > 0 ? "+" : "-")), 1.0, divisor);
    }

    return 4 * (-pi);
}

int main() 
{
    int N;
    float resultado;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &N);

    resultado = calculaPI(N);

    printf("\nResultado obtido: %.6f\n", resultado);

    return 0;
}
*/

// 13 - Escreva uma função que receba um vetor de valores reais e seu tamanho e retorne quantos destes valores são negativos.

/*
#include <stdio.h>

void negativos(float vetor[], int tamanho)
{
	int cont=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		if (vetor[i]<0)
		{
			cont++;
		}
	}
	printf("Temos %d, valores negativos",cont);
}

int main ()
{
	int tamanho=1; 
	float vetor[tamanho];
	int i; 
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	negativos(vetor, tamanho);
	
	return 0;
}
*/

// 14 - Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne o maior elemento do vetor.

/*
#include <stdio.h>

void maior(float vetor[], int tamanho)
{
	int valor_maior=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		if (valor_maior<vetor[i])
		{
			valor_maior=vetor[i];
		}
	}
	printf("O maior valor digitado foi %d",valor_maior);
}

int main ()
{
	int tamanho=1; 
	float vetor[tamanho];
	int i; 
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	maior(vetor, tamanho);
	
	return 0;
}
*/

// 15 - Implemente uma função que receba um vetor de inteiros e seu tamanho e ordene-o.

// Não feito por conta da complexidade

// 16 - Elabore uma função que recebe por parâmetro um vetor de inteiros e o seu tamanho e retorna a soma de seus elementos.

/*
#include <stdio.h>

void soma(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	
	for(i=0; i<tamanho;i++)
	{
		soma+=vetor[i];
	}
	printf("A soma dos elementos = %d",soma);
}

int main ()
{
	int tamanho=1; 
	float vetor[tamanho];
	int i; 
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	soma(vetor, tamanho);
	
	return 0;
}
*/

// 17 - Implemente uma função que receba um vetor de inteiros, seu tamanho e um valor x e retorne o índice da primeira posição do vetor que contém o valor x. 
// Se o valor x não estiver no vetor, a função deve retornar o valor -1.

/*
#include <stdio.h>

void encontrar(int vetor[], int tamanho, int x)
{
	int i;
	int retorno=0;
	
	for(i=0; i<tamanho;i++)
	{
		if (x==vetor[i])
		{
			printf("%d", i);
			retorno++;
		}
	}
	if (retorno==0)
		{
			printf("-1");
		}
}

int main ()
{
	int tamanho=1; 
	int vetor[tamanho];
	int i; 
	int x;
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	printf("Digite o valor do vetor que voce quer encontrar: \n");
	scanf("%d",&x);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%d",&vetor[i]);
	}
	
	encontrar(vetor, tamanho, x);
	
	return 0;
}
*/

// 18 - Implemente uma função que, dados um vetor de valores reais e seu tamanho, retorne a média dos valores armazenados.

/*
#include <stdio.h>

void media(float vetor[], int tamanho)
{
	int soma=0;
	int i;
	float media;
	
	for(i=0; i<tamanho;i++)
	{
		soma+=vetor[i];
	}
	media = (soma/tamanho);
	printf("A media dos elementos = %.2f",media);
}

int main ()
{
	int tamanho=1; 
	float vetor[tamanho];
	int i; 
	
	printf("Digite o tamanho do vetor: \n");
	scanf ("%d",&tamanho);
	
	for(i=0;i<tamanho;i++)
	{
		printf("Digite o %d valor do vetor:\n",i);
		scanf("%f",&vetor[i]);
	}
	
	media(vetor, tamanho);
	
	return 0;
}
*/

// 19 - Escreva uma função que receba um vetor de valores reais e seu tamanho e leia valores do teclado para preencher todo o vetor apenas com valores positivos. Observe que valores negativos
// devem ser ignorados e a leitura deve ser encerrada assim que a última posição do vetor for preenchida. 

/*
#include <stdio.h>

void preencher(float vetor[], int tamanho) 
{
    int i;
    float valor;
	
	i=0;
    do 
	{
        printf("Digite o valor do vetor %d:\n",i);
        scanf("%f", &valor);

        if (valor > 0) 
		{
        vetor[i] = valor;
    	i++;
    	}
	} while ( i < tamanho);
}

int main() {
    int tamanho;
	int i;
	
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    preencher(vetor, tamanho);

    printf("Valores do vetor preenchido apenas com valores positivos:\n");
    for (i = 0; i < tamanho; i++)
	{
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
*/
