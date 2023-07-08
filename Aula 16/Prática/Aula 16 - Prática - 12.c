// 12) Crie uma estrutura representando os alunos do curso de Algoritmos. A estrutura deve conter a matrícula do aluno, nome e notas dos 3 TVCs. Faça:
// a) Leitura de dados de 5 alunos.
// b) Encontre o aluno com maior nota da primeira prova.
// c) Encontre o aluno com maior média geral.
// d) Encontre o aluno com menor média geral
// Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 60 para aprovação.

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
