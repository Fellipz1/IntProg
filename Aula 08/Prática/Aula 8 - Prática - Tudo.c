// 4 - a - Escreva uma fun��o que l� um caractere do teclado que indique o sexo de uma pessoa. A fun��o deve retornar apenas o valor 'F' ou o valor 'M', por isso, enquanto o usu�rio digitar um valor inv�lido, 
// a fun��o deve solicitar que ele digite um destes dois valores.

/*
#include <stdio.h>

char lerSexo()
{
    char sexo;
    printf("Digite a inicial do seu sexo: ");
    scanf(" %c", &sexo);

    while (sexo != 'F' && sexo != 'M' && sexo!='f' && sexo!='m')
    {
        printf("Valor invalido. Digite apenas F ou f para feminino no caso das mulheres ou M ou m para masculino no caso dos homens.\n");
        scanf(" %c", &sexo);
    }

    return sexo;
}

int main()
{
    char sexo = lerSexo();
    printf("Sexo: %c\n", sexo);

    return 0;
}
*/

// 4 - b - Escreva uma fun��o que leia um valor inteiro do teclado representando a idade de uma pessoa. Espera-se que a fun��o retorne um valor entre 0 e 130.
// Assim, enquanto o usu�rio digitar um valor inv�lido, a fun��o deve solicitar novamente o valor.
/*
#include <stdio.h>

int lerIdade()
{
    int idade;
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        while (idade < 0 || idade > 130)
        {
            printf("Valor invalido. Digite apenas idades entre 0 e 130.\n");
        	printf("Digite a sua idade: ");
        	scanf("%d", &idade);
        }    
        
    return idade;
	}
}

int main()
{
    int idade = lerIdade();
    printf("Idade: %d\n", idade);

    return 0;
}
*/

// 4 - c - Escreva um programa que leia o sexo e a idade de 15 pessoas, chamando as fun��es desenvolvidas acima para garantir que ser�o informados dados v�lidos.
/*
#include <stdio.h>

char lerSexo()
{
    char sexo;
    printf("Digite a inicial do seu sexo: ");
    scanf(" %c", &sexo);

    while (sexo != 'F' && sexo != 'M' && sexo!='f' && sexo!='m')
    {
        printf("Valor invalido. Digite apenas F ou f para feminino no caso das mulheres ou M ou m para masculino no caso dos homens.\n");
        scanf(" %c", &sexo);
    }

    return sexo;
}
int lerIdade()
{
    int idade;
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        while (idade < 0 || idade > 130)
        {
            printf("Valor invalido. Digite apenas idades entre 0 e 130.\n");
        	printf("Digite a sua idade: ");
        	scanf("%d", &idade);
        }    
        
    return idade;
	}
}

int main()
{
    char sexo;
	int idade;
    int cont=0;
    
	while (cont < 15)
    {
        printf("Pessoa %d:\n", cont + 1);

        sexo = lerSexo();
        idade = lerIdade();

        printf("Sexo: %c\n", sexo);
        printf("Idade: %d\n\n", idade);

        cont++;
    }


    return 0;
}
*/

// 5 - Escreva uma fun��o que recebe como par�metro um n�mero inteiro n. A fun��o deve ler n valores do teclado e retornar quantos destes valores s�o negativos.
// Fa�a tamb�m um programa principal que leia do teclado o que for necess�rio para executar a chamada correta desta fun��o e imprimir seu resultado na tela.

/*
#include <stdio.h>

int contarNegativos(int n)
{
	int i, valor, cont = 0;

    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor < 0)
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    int n, negativos;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    negativos = contarNegativos(n);

    printf("Quantidade de valores negativos: %d\n", negativos);

    return 0;
}
*/

// 6 - Escreva uma fun��o que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores. 
// Exemplo: se os valores lidos forem 5 e 2, a sa�da dever� ser 5 4 3 2.
// Fa�a tamb�m um programa principal que leia do teclado o que for necess�rio para executar a chamada correta desta fun��o.

/*
#include <stdio.h>

void n1aten2(int n1, int n2)
{
    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            printf("%d ", n1);
            n1 = n1 + 1;
        }
    }
    else
    {
        while (n1 >= n2)
        {
            printf("%d ", n1);
            n1 = n1 - 1;
        }
    }
}

int main()
{
    int n1, n2;

    printf("Digite o valor de n1: ");
    scanf("%d", &n1);

    printf("Digite o valor de n2: ");
    scanf("%d", &n2);

    printf("Intervalo fechado: ");
    n1aten2(n1, n2);

    return 0;
}
*/

// 7 - a) Escreva uma fun��o que recebe um inteiro N como par�metro e imprime uma linha contendo os n�meros de 1 at� N. Por exemplo, se o valor do par�metro for 6, a fun��o dever� imprimir: 1 2 3 4 5 6
// b) Fa�a um programa para testar a fun��o, solicitando que o usu�rio digite o valor de N.
// c) Refa�a seu programa para que, ap�s o usu�rio digitar o valor de N (por exemplo, 6), o programa imprima o tri�ngulo:

/*
#include <stdio.h>

void imprimirLinha(int N)
{
    int x = 1;

    while (x <= N)
    {
        printf("%d ", x);
        x++;
    }

    printf("\n");
}

void imprimirTriangulo(int N)
{
    int x = 1;

    while (x <= N)
    {
        int y = 1;

        while (y <= x)
        {
            printf("%d ", y);
            y++;
        }

        printf("\n");
        x++;
    }
}

int main()
{
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Linha: ");
    imprimirLinha(N);

    printf("Triangulo:\n");
    imprimirTriangulo(N);

    return 0;
}
*/

// 8 -Uma empresa tem 30 funcion�rios e resolveu conceder a todos um aux�lio mensal de R$60,00 por m�s para cada dependente menor de 18 anos. 
// Escreva um programa que, para cada um dos 30 funcion�rios, leia seu n�mero de dependentes. Em seguida, o programa deve ler a idade de cada dependente e imprimir o valor total do aux�lio que este funcion�rio receber�.
// Voc� pode criar fun��es, se achar necess�rio.
// Obs: Precisar� de mais contadores. Analise bem o problema.











