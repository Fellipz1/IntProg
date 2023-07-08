// 9) Faça um programa que armazene informações de restaurantes. Cada restaurante é identificado pelo nome, o tipo de comida (brasileira, chinesa, francesa, 
// italiana, japonesa, etc.) e uma nota para a cozinha  (entre 0 e 5). 
// -> O programa deverá ler todas as informações e imprimir  a lista de todos os restaurantes e, ao final, o tipo de cozinha do restaurante com maior nota.

/*
#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome_restaurante[100];
	char tipo_comida[50];
	int avaliacao;
} restaurante;

int main()
{
	int tamanho;
	int i;
	printf("Digite quantos restaurantes serao avaliados: ");
	scanf("%d", &tamanho);
	restaurante qualificacao[tamanho];
	fflush(stdin);
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite o nome do restaurante %d: ", i+1);
		fgets(qualificacao[i].nome_restaurante, 100, stdin);
		printf("Digite o tipo de comida do restaurante %d: ", i+1);
		fgets(qualificacao[i].tipo_comida, 100, stdin);
		printf("Digite a nota do restaurante %d: ", i+1);
		scanf("%d", &qualificacao[i].avaliacao);
		while(qualificacao[i].avaliacao < 0 || qualificacao[i].avaliacao >5){
			printf("Nota invalida\n");
			printf("Digite a nota do restaurante %d: ", i+1);
			scanf("%d", &qualificacao[i].avaliacao);
		}
		fflush(stdin);
	}
	int maior = -1;
	int indice;
	for(i = 0; i < tamanho; i++)
	{
		if(qualificacao[i].avaliacao > maior)
		{
		maior = qualificacao[i].avaliacao;
		indice = i;
		}
	}
	printf("\n");
	printf("Restaurante: \n");
	for(i = 0; i < tamanho; i++)
	{
		printf("%s",qualificacao[i].nome_restaurante);
	}
	printf("\n");
	printf("Restaurante com maior nota vende o tipo de comida: ",qualificacao[indice].tipo_comida);
	return 0;
}
*/

//10) Considerando a estrutura
/*
typedef struct 
{
 float x;
 float y;
 float z;
} Vetor;
para representar um vetor no R3. Implemente uma função para calcular e retornar o resultado 
das operações de soma, subtração e produto vetorial entre dois vetores. Deverá ser 
desenvolvido uma função para cada uma das operações. Faça um programa para ler 2 vetores 
calcular a soma, subtração e produto vetorial deles e imprimir na tela. Dica produto vetorial:
x = y1*z2 - z1*x2;
y = z1*x2 - x1*z2;
z = x1*y2 - y1*x2;
*/

/*
#include <stdio.h>
#include <string.h>

typedef struct
{
	float x;
	float y;
	float z;
} Vetor;

Vetor soma(Vetor r[2])
{
	Vetor resultado;
	resultado.x = r[0].x + r[1].x;
	resultado.y = r[0].y + r[1].y;
	resultado.z = r[0].z + r[1].z;
	return resultado;
}

Vetor subtracao(Vetor r[2])
{
	Vetor resultado;
	resultado.x = r[0].x - r[1].x;
	resultado.y = r[0].y - r[1].y;
	resultado.z = r[0].z - r[1].z;
	return resultado;
}

Vetor produtoVetorial(Vetor r[2])
{
	Vetor resultado;
	resultado.x = (r[0].y * r[1].z) - (r[0].z * r[1].x);
	resultado.y = (r[0].z * r[1].x) - (r[0].x * r[1].z);
	resultado.z = (r[0].x * r[1].y) - (r[0].y * r[1].x);
	return resultado;
}

int main()
{
	int i;
	Vetor r[2];
	for(i = 0; i < 2; i++)
	{
		printf("Digite o valor de x do vetor %d: ", i+1);
		scanf("%f", &r[i].x);
		printf("Digite o valor de y do vetor %d: ", i+1);
		scanf("%f", &r[i].y);
		printf("Digite o valor de z do vetor %d: ", i+1);
		scanf("%f", &r[i].z);
	}
	printf("\n");
	Vetor resultadoSoma = soma(r);
	Vetor resultadoDiferenca = subtracao(r);
	Vetor resultadoProduto = produtoVetorial(r);
	printf("Soma entre os vetores = < %.2f, %.2f, %.2f >\n", resultadoSoma.x, resultadoSoma.y, resultadoSoma.z);
	printf("Subtracao entre vetorees = < %.2f, %.2f, %.2f >\n", resultadoDiferenca.x, resultadoDiferenca.y, resultadoDiferenca.z);
	printf("Produto entre os vetores = < %.2f, %.2f, %.2f >\n", resultadoProduto.x, resultadoProduto.y, resultadoProduto.z);
	return 0;
}
*/
	
	
// 11) Escreva um programa para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// a) Horário: composto de hora, minutos e segundos.
// b) Data: composto de dia, mês e ano.
/// c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
// d) Faça um programa que leia 10 compromissos e imprima no formato 
// No dia dd/mm/aaaa as hh:mm:ss voce tem o compromisso XXXXXXXXX

/*
//Letra A
#include<stdio.h>
int main ()
{
	struct horario
  	{
    	float hora;
    	float minutos;
    	float segundos;
  	};
  	struct horario horario;
  
  	printf("Cadastro do momento\n");
  
	printf("Digite a quantidade de horas: ");
	scanf("%f", &horario.hora);
	
	printf("Digite a quantidade em minutos: ");
	scanf("%f", &horario.minutos);  
	  
	printf("Digite a quantidade em segundos: ");
	scanf("%f", &horario.segundos);
	  
	printf("\nLendo os dados da struct \n");
	printf("Horas: %.0fh\n", horario.hora);
	printf("Minutos: %.0fmin\n" , horario.minutos);
	printf("Segundos: %.0fs\n" , horario.segundos);
	  
	getch();
	return(0);  
}
*/

/*
//Letra B
#include<stdio.h>
int main ()
{
	struct data
  	{
    	float dia;
    	float mes;
    	float ano;
  	};
  	struct data data;
  
  	printf("Cadastro do dia\n");
  
	printf("Digite o dia: ");
	scanf("%f", &data.dia);
	
	printf("Digite o mes: ");
	scanf("%f", &data.mes);  
	  
	printf("Digite o ano: ");
	scanf("%f", &data.ano);
	  
	printf("\nLendo os dados da struct \n");
	printf("Dias: %.0f\n", data.dia);
	printf("Mes: %.0f\n" , data.mes);
	printf("Ano: %.0f\n" , data.ano);
	  
	getch();
	return(0);  
}
*/
/*
//Letra C
#include<stdio.h>
int main ()
{
	struct compromisso
  	{
    	float dia;
    	float mes;
    	float ano;
    	float hora;
    	float minutos;
    	float segundos;
    	char descricao[200];
  	};
  	struct compromisso date;
  
  	printf("Cadastro:\n");
  
	printf("Digite o dia: ");
	scanf("%f", &date.dia);
	
	printf("Digite o mes: ");
	scanf("%f", &date.mes);  
	  
	printf("Digite o ano: ");
	scanf("%f", &date.ano);
	  
	printf("Digite a quantidade de horas: ");
	scanf("%f", &date.hora);
	
	printf("Digite a quantidade em minutos: ");
	scanf("%f", &date.minutos);  
	  
	printf("Digite a quantidade em segundos: ");
	scanf("%f", &date.segundos);
	
	printf("Descreva o seu compromisso: ");
	fflush(stdin);
	fgets(date.descricao, 200, stdin);
	  
	printf("\nLendo os dados da struct \n");
	printf("Dias: %.0f\n", date.dia);
	printf("Mes: %.0f\n" , date.mes);
	printf("Ano: %.0f\n" , date.ano);
	printf("Horas: %.0fh\n", date.hora);
	printf("Minutos: %.0fmin\n" , date.minutos);
	printf("Segundos: %.0fs\n" , date.segundos);
	printf("Descricao do comprimisso: %s", date.descricao);
	
	getch();
	return(0);  
}
*/

/*
//Letra D
#include <stdio.h>
#include <string.h>
	struct compromisso
  	{
    	float dia;
    	float mes;
    	float ano;
    	float hora;
    	float minutos;
    	float segundos;
    	char descricao[200];
  	};
int main(){
  	struct compromisso date[10];
    int i, j;
    //struct date momento;
    for(i = 0; i < 10; i++){
  	printf("Cadastro momento %d:\n",i+1);
  
	printf("Digite o dia: ");
	scanf("%f", &date[i].dia);
	
	printf("Digite o mes: ");
	scanf("%f", &date[i].mes);  
	  
	printf("Digite o ano: ");
	scanf("%f", &date[i].ano);
	  
	printf("Digite a quantidade de horas: ");
	scanf("%f", &date[i].hora);
	
	printf("Digite a quantidade em minutos: ");
	scanf("%f", &date[i].minutos);  
	  
	printf("Digite a quantidade em segundos: ");
	scanf("%f", &date[i].segundos);
	
	printf("Descreva o seu compromisso: ");
	fflush(stdin);
	fgets(date[i].descricao, 200, stdin);

	printf("No dia %.0f/%.0f/%.0f as %.0f:%.0f:%.0f voce tem o compromisso %s", date[i].dia, date[i].mes,date[i].ano,date[i].hora, date[i].minutos,date[i].segundos,date[i].descricao);

	}
    return 0;
}
*/

// 12) Crie uma estrutura representando os alunos do curso de Algoritmos. A estrutura deve conter a matrícula do aluno, nome e notas dos 3 TVCs. Faça:
// a) Leitura de dados de 5 alunos.
// b) Encontre o aluno com maior nota da primeira prova.
// c) Encontre o aluno com maior média geral.
// d) Encontre o aluno com menor média geral
// Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 60 para aprovação.

/*
#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[100];
	char matricula[50];
	float nota1;
	float nota2;
	float nota3;
} estudante;

int main()
{
	int tamanho = 5;
	estudante aluno[tamanho];
	int i;

	for (i = 0; i < tamanho; i++)
	{
		printf("Digite o nome do aluno %d: ", i + 1);
		fflush(stdin);
		fgets(aluno[i].nome, 100, stdin);
		printf("Digite a matricula do aluno %d: ", i + 1);
		fflush(stdin);
		fgets(aluno[i].matricula, 50, stdin);
		printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
		scanf("%f", &aluno[i].nota1);
		printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
		scanf("%f", &aluno[i].nota2);
		printf("Digite a nota da prova 3 do aluno %d: ", i + 1);
		scanf("%f", &aluno[i].nota3);

		while (aluno[i].nota1 < 0 || aluno[i].nota1 > 10)
		{
			printf("Nota invalida\n");
			printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
			scanf("%f", &aluno[i].nota1);
		}
		while (aluno[i].nota2 < 0 || aluno[i].nota2 > 10)
		{
			printf("Nota invalida\n");
			printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
			scanf("%f", &aluno[i].nota2);
		}
		while (aluno[i].nota3 < 0 || aluno[i].nota3 > 10)
		{
			printf("Nota invalida\n");
			printf("Digite a nota da prova 3 do aluno %d: ", i + 1);
			scanf("%f", &aluno[i].nota3);
		}
	}

	int maiorNotaProva1 = -1;
	int indiceMaiorNotaProva1;
	float maiorMediaGeral = -1;
	int indiceMaiorMediaGeral;
	float menorMediaGeral = 11;
	int indiceMenorMediaGeral;

	for (i = 0; i < tamanho; i++)
	{
		if (aluno[i].nota1 > maiorNotaProva1)
		{
			maiorNotaProva1 = aluno[i].nota1;
			indiceMaiorNotaProva1 = i;
		}

		float mediaGeral = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;

		if (mediaGeral > maiorMediaGeral)
		{
			maiorMediaGeral = mediaGeral;
			indiceMaiorMediaGeral = i;
		}

		if (mediaGeral < menorMediaGeral)
		{
			menorMediaGeral = mediaGeral;
			indiceMenorMediaGeral = i;
		}

		if (mediaGeral >= 60)
		{
			printf("Aluno %s - Aprovado\n", aluno[i].nome);
		}
		else
		{
			printf("Aluno %s - Reprovado\n", aluno[i].nome);
		}
	}

	printf("\n");
	printf("A maior nota na prova 1 foi %.2f do aluno %s", aluno[indiceMaiorNotaProva1].nota1, aluno[indiceMaiorNotaProva1].nome, maiorNotaProva1);
	printf("A maior media geral foi %.2f do aluno %s", maiorMediaGeral, aluno[indiceMaiorMediaGeral].nome);
	printf("A menor media geral foi %.2f do aluno %s", menorMediaGeral, aluno[indiceMenorMediaGeral].nome);

	return 0;
}
*/

// 13) Utilize a estrutura definida abaixo nas questões a seguir:
/*
typedef struct {
 int codigo;
 char nome[100];
 int vendas[12];
} Produto;
*/
/*
a) Faça uma função que identifique o produto mais vendido em um ano. Esta função deve receber 
dois parâmetros: um vetor com a lista de produtos (estrutura acima) e o seu tamanho. A função deve 
retornar a posição (índice) na lista do produto mais vendido no ano. Para calcular a quantidade 
vendida de um produto, considere que o campo vendas armazena a quantidade de vendas do 
produto em cada mês do ano. Por exemplo, a posição 0 armazena a quantidade vendida em janeiro, 
a posição 3 armazena a quantidade de vendas em abril, etc.

b) Faça um programa principal que declare um vetor de produtos, mas considere que a loja possui capacidade 
para no máximo 100 produtos. O programa deve fazer a leitura de todos os produtos disponíveis através do 
teclado e depois chamar a função criada anteriormente para identificar o produto mais vendido. Ao final, o 
programa deve imprimir o nome e o código do produto mais vendido.
*/
/*
#include <stdio.h>
#include <string.h>

typedef struct
{
	int codigo;
	char nome[100];
	int vendas[12];
} Produto;

int maisVendido(Produto produtos[], int tamanho)
{
	int maisVendido = 0;
	int qtdMaisVendida = 0;
	int i;
	int j;
	
	for(i = 0; i < tamanho; i++)
	{
		int qtdVendida = 0;
		for(j = 0; j < 12; j++)
		{
			qtdVendida += produtos[i].vendas[j];
		}
		if(qtdVendida > qtdMaisVendida)
		{
			qtdMaisVendida = qtdVendida;
			maisVendido = i;
		}
	}	
	return maisVendido;	
}
int main()
{
	Produto produtos[100];
	int tamanho;
	int i;
	int j;
	
	printf("Quantidade de produtos: ");
	scanf("%d", &tamanho);	
	
	for(i = 0; i < tamanho; i++)
	{
		printf("Produto %d\n", i+1);
		printf("Codigo: ");
		scanf("%d", &produtos[i].codigo);
		printf("Nome: ");
		scanf(" %[^\n]", &produtos[i].nome);
		
		for(j = 0; j < 12; j++)
		{
			printf("Quantidade vendida no mes %d: ", j+1);
			scanf("%d", &produtos[i].vendas[j]);
		}
		printf("\n");
	}
	
	int produtosMaisVendido = maisVendido(produtos, tamanho);	
	
	printf("Produto mais vendido:\n");
	printf("Codigo: %d\n", produtos[produtosMaisVendido].codigo);
	printf("Nome: %s\n", produtos[produtosMaisVendido].nome);	
	
	return 0; 
}
*/
