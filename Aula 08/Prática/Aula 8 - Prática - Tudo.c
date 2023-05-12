// 4 - a - Escreva uma função que lê um caractere do teclado que indique o sexo de uma pessoa. A função deve retornar apenas o valor 'F' ou o valor 'M', por isso, enquanto o usuário digitar um valor inválido, 
// a função deve solicitar que ele digite um destes dois valores.

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

// 4 - b - Escreva uma função que leia um valor inteiro do teclado representando a idade de uma pessoa. Espera-se que a função retorne um valor entre 0 e 130.
// Assim, enquanto o usuário digitar um valor inválido, a função deve solicitar novamente o valor.
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

// 4 - c - Escreva um programa que leia o sexo e a idade de 15 pessoas, chamando as funções desenvolvidas acima para garantir que serão informados dados válidos.
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

// 5 - Escreva uma função que recebe como parâmetro um número inteiro n. A função deve ler n valores do teclado e retornar quantos destes valores são negativos.
// Faça também um programa principal que leia do teclado o que for necessário para executar a chamada correta desta função e imprimir seu resultado na tela.

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

// 6 - Escreva uma função que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores. 
// Exemplo: se os valores lidos forem 5 e 2, a saída deverá ser 5 4 3 2.
// Faça também um programa principal que leia do teclado o que for necessário para executar a chamada correta desta função.

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

// 7 - a) Escreva uma função que recebe um inteiro N como parâmetro e imprime uma linha contendo os números de 1 até N. Por exemplo, se o valor do parâmetro for 6, a função deverá imprimir: 1 2 3 4 5 6
// b) Faça um programa para testar a função, solicitando que o usuário digite o valor de N.
// c) Refaça seu programa para que, após o usuário digitar o valor de N (por exemplo, 6), o programa imprima o triângulo:

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

// 8 -Uma empresa tem 30 funcionários e resolveu conceder a todos um auxílio mensal de R$60,00 por mês para cada dependente menor de 18 anos. 
// Escreva um programa que, para cada um dos 30 funcionários, leia seu número de dependentes. Em seguida, o programa deve ler a idade de cada dependente e imprimir o valor total do auxílio que este funcionário receberá.
// Você pode criar funções, se achar necessário.
// Obs: Precisará de mais contadores. Analise bem o problema.











