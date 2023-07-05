// 1) Defina uma estrutura para representar as informações de um cartão de crédito. Você precisa apenas criar a estrutura com os dados e tipos apropriados. Não é necessário criar um programa para utilizá-la.

/*
#include <stdio.h>
int main()
{
	struct dados_do_Cartao
	{
		char nome[50];
		char numero[30];
		char data_de_validade[20];
		float codigo_cartao;
	};
	struct dados_do_Cartao usuario;
  
	printf("Cadastro de usuario do catao\n");
  
	printf("Nome no cartao do usuario: ");
	fflush(stdin);
	fgets(usuario.nome, 50, stdin);
  
	printf("Numero do cartao: ");
	fflush(stdin);
	fgets(usuario.numero, 30, stdin);
  
	printf("Informe a data de validade do cartao: ");
	fflush(stdin);
	fgets(usuario.data_de_validade, 20, stdin);
  
	printf("Informe o codigo de seguranca do cartao: ");
	scanf("%f", &usuario.codigo_cartao);
  
	printf("\nLendo os dados da struct \n");
	printf("Nome: %s", usuario.nome);
	printf("Numero do cartao: %s", usuario.numero);
	printf("Data de validade do cartao: %s" , usuario.data_de_validade);
	printf("Codigo de seguranca do cartao: %.0f\n" , usuario.codigo_cartao);
  
	getch();
	return(0);
}
*/

// 2) Defina uma estrutura chamada medidas para representar o peso a altura de uma pessoa.

/*
#include<stdio.h>
int main ()
{
	struct peso_altura
  	{
    	char nome[50];
    	float peso;
    	float altura;
  	};
  	struct peso_altura pessoa;
  
  	printf("Cadastro da pessoa\n");
  
	printf("Digite seu nome: ");
	fflush(stdin);
	fgets(pessoa.nome, 50, stdin);
	
	printf("Informe o seu peso (em kg): ");
	scanf("%f", &pessoa.peso);  
	  
	printf("Informe sua altura (em cm): ");
	scanf("%f", &pessoa.altura);
	  
	printf("\nLendo os dados da struct \n");
	printf("Nome: %s", pessoa.nome);
	printf("Peso = %.2f kg\n" , pessoa.peso);
	printf("Altura = %.1f cm\n" , pessoa.altura);
	  
	getch();
	return(0);  
}
*/

// 3) Considerando a estrutura do exercício (2) e a declaração:
// medidas João, Maria;
// -> Escreva instruções para atribuir: 1.78 à altura de João; 1.64 à altura de Maria; 75 ao peso de João; 59 ao peso de Maria.
// -> Escreva um conjunto de instruções para imprimir a média das alturas e a média dos pesos de João e Maria.

/*
#include <stdio.h>
struct peso_altura
{
    float peso;
    float altura;
};

int main()
{
    struct peso_altura joao, maria;

    printf("Cadastro da pessoa\n");

    printf("Informe o peso de Joao (em kg): ");
    scanf("%f", &joao.peso);

    printf("Informe a altura de Joao (em cm): ");
    scanf("%f", &joao.altura);

    getchar(); 

    printf("Informe o peso de Maria (em kg): ");
    scanf("%f", &maria.peso);

    printf("Informe a altura de Maria (em cm): ");
    scanf("%f", &maria.altura);

    float media_alturas = (joao.altura + maria.altura) / 2;
    float media_pesos = (joao.peso + maria.peso) / 2;

    printf("\nDados de Joao\n");
    printf("Peso: %.2f kg\n", joao.peso);
    printf("Altura: %.1f cm\n", joao.altura);

    printf("\nDados de Maria\n");
    printf("Peso: %.2f kg\n", maria.peso);
    printf("Altura: %.1f cm\n", maria.altura);

    printf("\nMédia das alturas: %.1f cm\n", media_alturas);
    printf("Média dos pesos: %.2f kg\n", media_pesos);

    return 0;
}
*/

// 4) Faça um programa (função principal) para leitura, via teclado, dos dados de um atleta. Os dados a serem guardados na estrutura atleta são os seguintes: nome, medidas (estrutura definida
// no exercício 2), esporte praticado e idade. Ao final, imprima estas informações na tela. 

/*
#include <stdio.h>

struct atleta
{
    char nome[50];
    float peso;
    float altura;
    char esporte[50];
    int idade;
};

int main()
{
    struct atleta jogador;

    printf("Digite o nome do atleta: ");
    fgets(jogador.nome, 50, stdin);

    printf("Informe o peso do atleta (em kg): ");
    scanf("%f", &jogador.peso);

    printf("Informe a altura do atleta (em cm): ");
    scanf("%f", &jogador.altura);

    getchar(); // Limpa o caractere de nova linha pendente

    printf("Informe o esporte praticado pelo atleta: ");
    fgets(jogador.esporte, 50, stdin);

    printf("Informe a idade do atleta: ");
    scanf("%d", &jogador.idade);

    printf("\nDados do atleta:\n");
    printf("Nome: %s", jogador.nome);
    printf("Peso: %.2f kg\n", jogador.peso);
    printf("Altura: %.1f cm\n", jogador.altura);
    printf("Esporte: %s", jogador.esporte);
    printf("Idade: %d anos\n", jogador.idade);

    return 0;
}
*/

// 5) a) Crie uma estrutura chamada ponto contendo apenas as coordenadas x e y (inteiros) do ponto.
// b) Faça uma função que receba dois pontos por parâmetro e retorne a distância entre eles.
// c) Faça um programa que declare 2 pontos, leia as coordenadas x e y de cada um e chame a função criada para calcular a distância entre eles. Apresente no final a distância entre os dois pontos.

/*
#include <stdio.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

float distanciaPontos(struct ponto p1, struct ponto p2)
{
    int difX = p2.x - p1.x;
    int difY = p2.y - p1.y;
    float distancia = sqrt(difX * difX + difY * difY);
    return distancia;
}

int main()
{
    struct ponto ponto1, ponto2;

    printf("Digite as coordenadas do ponto 1:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto1.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto1.y);

    printf("\nDigite as coordenadas do ponto 2:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto2.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto2.y);

    float distancia = distanciaPontos(ponto1, ponto2);

    printf("\nA distancia entre os pontos (%d, %d) e (%d, %d) = %.2f\n", ponto1.x, ponto1.y, ponto2.x, ponto2.y, distancia);

    return 0;
}
*/

// 6) Utilizando a estrutura ponto definida no exercício 5, faça uma função que receba 2 pontos e retorne o ponto mais próximo da origem. Em seguida, modifique o programa principal para ler 4 pontos e imprimir 
// apenas as coordenadas do ponto mais próximo da origem.

/*
#include <stdio.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

float distanciaOrigem(struct ponto p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}

struct ponto pontoMaisProximoOrigem(struct ponto p1, struct ponto p2)
{
    float distancia1 = distanciaOrigem(p1);
    float distancia2 = distanciaOrigem(p2);

    if (distancia1 <= distancia2)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}

int main()
{
    struct ponto ponto1, ponto2, ponto3, ponto4;

    printf("Digite as coordenadas do ponto 1:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto1.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto1.y);

    printf("\nDigite as coordenadas do ponto 2:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto2.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto2.y);

    printf("\nDigite as coordenadas do ponto 3:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto3.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto3.y);

    printf("\nDigite as coordenadas do ponto 4:\n");
    printf("Coordenada x: ");
    scanf("%d", &ponto4.x);
    printf("Coordenada y: ");
    scanf("%d", &ponto4.y);

    struct ponto pontoMaisProximo = pontoMaisProximoOrigem(pontoMaisProximoOrigem(ponto1, ponto2), pontoMaisProximoOrigem(ponto3, ponto4));

    printf("\nAs coordenadas do ponto mais proximo da origem = (%d, %d)\n", pontoMaisProximo.x, pontoMaisProximo.y);

    return 0;
}
*/

// 7) Utilizando a estrutura medidas definida no exercício 2, faça um programa que leia a altura e o peso de 6 pessoas e imprima a média da altura e a média do peso do grupo.

/*
#include <stdio.h>

struct medidas
{
    char nome[50];
    float peso;
    float altura;
};

int main()
{
    struct medidas pessoas[6]; // Array de 6 elementos do tipo struct medidas
    float somaAltura = 0;
    float somaPeso = 0;
    int i;

    printf("Cadastro de pessoas\n");

    for (i = 0; i < 6; i++)
    {
        printf("\nDigite os dados da pessoa %d:\n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 50, stdin);

        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("Altura (em cm): ");
        scanf("%f", &pessoas[i].altura);

        somaAltura += pessoas[i].altura;
        somaPeso += pessoas[i].peso;
    }

    float mediaAltura = somaAltura / 6;
    float mediaPeso = somaPeso / 6;

    printf("\nMédia da altura do grupo: %.2f cm\n", mediaAltura);
    printf("Média do peso do grupo: %.2f kg\n", mediaPeso);

    return 0;
}
*/

// 8) Faça um programa que receba três nomes (de no máximo 100 caracteres cada) e as idades das respectivas pessoas em um vetor de estruturas. Após o recebimento, listar os três nomes armazenados neste
// vetor por ordem crescente de idades.

/*
#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[101];
    int idade;
};

void bubbleSort(struct pessoa vetor[], int tamanho)
{
    int i, j;
    struct pessoa temp;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - 1 - i; j++)
        {
            if (vetor[j].idade > vetor[j + 1].idade)
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct pessoa pessoas[3];
    int i;

    printf("Digite os dados das pessoas:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Pessoa %d\n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 101, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; // Remover o caractere de nova linha

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
    }

    bubbleSort(pessoas, 3);

    printf("\nNomes em ordem crescente de idades:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", pessoas[i].nome);
    }

    return 0;
}
*/



