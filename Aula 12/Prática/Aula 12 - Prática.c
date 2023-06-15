// 9) Desenvolva um programa que leia um vetor de números reais, um 
// escalar e imprima o resultado da multiplicação do vetor pelo escalar.

/*
#include<stdio.h>

int main()
{
	int escalar;
	int tamanho;
	float multiplicacao;
	
	printf("Digite o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	
	float valor[tamanho];
	
	printf("Digite o seu escalar: \n");
	scanf("%d",&escalar);
	
	int i;
	for(i=0; i<tamanho; i++)
	{	
		printf("Digite o valor do vetor %d: \n",i);
		scanf("%f",&valor[i]);
	}
	for (i=0;i<tamanho; i++)
	{
		multiplicacao=(valor[i]*escalar);
		printf("O valor do seu vetor [%d], multiplicado pelo seu escalar %d, gerou o resultado = %.2f\n", i, escalar, multiplicacao);
	}
	return 0;
}
*/

// 10) Faça um programa que preencha um vetor de elementos inteiros 
// com valores lidos do teclado e, uma função que imprima somente 
// valores ímpares armazenados nos índices pares.

/*
#include <stdio.h>
int main() 
{
    int numero;
    int tamanho;
    
    printf("Digite o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	
	int valor[tamanho];
	
    for (int i = 0; i < tamanho; i++) 
	{
		printf("Digite o valor do vetor %d\n", i);
		scanf("%d",&numero);
		
		if (i%2==0)
		{
			if (numero%2!=0)
			{
				printf("O seu vetor = %d\tImpar = %d \n",i, numero);
			}
		}
		
    }
    
    return 0;
}
*/

// 11) Faça um programa que preenche um vetor de inteiros com 
// valores lidos do teclado e uma função que deve verificar se há 
// elementos repetidos no vetor e imprimir os índices de todos os pares 
// de elementos repetidos

/*
#include <stdio.h>
int main() 
{
    int tamanho;
    
    printf("Digite o tamanho do vetor: \n");
	scanf("%d",&tamanho);
	
	int valor[tamanho];
	
    for (int i = 0; i < tamanho; i++) 
	{
		printf("Digite o valor do vetor \n");
		scanf("%d",&valor[i]);
	}
		for (int i = 0; i < tamanho; i++)
		{
			for (int j=i+1;j<tamanho;j++)
			{
				if(valor[i]==valor[j])
				{
					printf("O seu vetor %d tem valor repetido com o vetor %d \n",i,j);
				}
			}
		}
     
    return 0;
}
*/

// 12) Faça um programa com 3 vetores, P1, P2 e P3, representando notas de alunos 
// em 3 provas. Assuma que a turma tem até 100 alunos. Seu programa deverá 
// preencher um vetor com valores lidos do teclado e utilizar as seguintes funções:
// a) imprimir um vetor
// b) imprimir a nota final, salva em um vetor, de cada aluno (=(P1+P2+(2*P3))/4)
// c) imprimir os índices do vetor cuja nota < 7 
// d) retornar número de notas >= 7 
// O programa principal deverá chamar a função para preencher os vetores e, em 
// seguida, exibirá um menu, que permita que o usuário selecione o que será realizado.

#include <stdio.h>

#define MAX_ALUNOS 100

void preencherVetor(float vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void imprimirVetor(float vetor[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

void calcularNotasFinais(float p1[], float p2[], float p3[], float notasFinais[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        notasFinais[i] = (p1[i] + p2[i] + (2 * p3[i])) / 4;
    }
}

void imprimirNotasFinais(float notasFinais[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("Nota final do aluno %d: %.2f\n", i + 1, notasFinais[i]);
    }
}

void imprimirIndicesNotasMenores(float notasFinais[], int tamanho) {
    int i;

    printf("Alunos com nota abaixo de 7:\n");
    for (i = 0; i < tamanho; i++) {
        if (notasFinais[i] < 7) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}

int contarNotasMaioresIgualSete(float notasFinais[], int tamanho) {
    int i;
    int contador = 0;

    for (i = 0; i < tamanho; i++) {
        if (notasFinais[i] >= 7) {
            contador++;
        }
    }

    return contador;
}

int main() {
    float p1[MAX_ALUNOS], p2[MAX_ALUNOS], p3[MAX_ALUNOS], notasFinais[MAX_ALUNOS];
    int opcao;
    int numAlunos;

    printf("Digite o numero de alunos (maximo 100): ");
    scanf("%d", &numAlunos);

    printf("Preencha as notas da primeira prova:\n");
    preencherVetor(p1, numAlunos);

    printf("Preencha as notas da segunda prova:\n");
    preencherVetor(p2, numAlunos);

    printf("Preencha as notas da terceira prova:\n");
    preencherVetor(p3, numAlunos);

    do {
        printf("\nMenu:\n");
        printf("1 - Imprimir as notas da primeira prova\n");
        printf("2 - Imprimir as notas da segunda prova\n");
        printf("3 - Imprimir as notas da terceira prova\n");
        printf("4 - Calcular e imprimir as notas finais\n");
        printf("5 - Imprimir os indices dos alunos com nota abaixo de 7\n");
        printf("6 - Retornar o numero de notas maiores ou igual a 7\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Notas da primeira prova: ");
                imprimirVetor(p1, numAlunos);
                break;
            case 2:
                printf("Notas da segunda prova: ");
                imprimirVetor(p2, numAlunos);
                break;
            case 3:
                printf("Notas da terceira prova: ");
                imprimirVetor(p3, numAlunos);
                break;
            case 4:
                calcularNotasFinais(p1, p2, p3, notasFinais, numAlunos);
                printf("Notas finais:\n");
                imprimirNotasFinais(notasFinais, numAlunos);
                break;
            case 5:
                calcularNotasFinais(p1, p2, p3, notasFinais, numAlunos);
                imprimirIndicesNotasMenores(notasFinais, numAlunos);
                break;
            case 6:
                calcularNotasFinais(p1, p2, p3, notasFinais, numAlunos);
                printf("Numero de notas maiores ou igual a 7: %d\n", contarNotasMaioresIgualSete(notasFinais, numAlunos));
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
