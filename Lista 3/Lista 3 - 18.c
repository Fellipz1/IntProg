/* 18. Faça um programa que permita o cadastro de veículos. A estrutura veículos deverá conter os campos placa, marca, modelo e ano. Faça um menu com as seguintes opções:
Menu:
1 - Cadastrar as informações de um veículo
2 - Verificar se uma placa está no formato correto (AAADDDD) (A são letras e D são dígitos)
3 - Imprimir por ano
4 - Pesquisar veículo por placa
5 - Imprimir todos os veículos cadastrados
	• O programa deverá ter as seguintes características:
		-> No terceiro item, peça o ano mínimo e máximo e imprima os veículos que estão nesse intervalo.
		-> No item 4 deve retornar o índice do veículo caso ele seja encontrado e -1 caso contrário
		-> O programa principal deve cadastrar 5 veículos. Crie um vetor com 20 posições para que seja possível o cadastro de outros.
		-> Faça funções para realizar as operações de cada um dos itens do menu.
*/

#include <stdio.h>
#include <string.h>
#define Max_veiculos 20

typedef struct 
{
    char placa[8];
    char marca[50];
    char modelo[50];
    int ano;
} Veiculo;

int numVeiculos = 0;
Veiculo veiculos[Max_veiculos];

void cadastrarVeiculo() 
{
    if (numVeiculos >= Max_veiculos) 
	{
        printf("Limite de veiculos cadastrados atingido.\n");
        return;
    }

    Veiculo novoVeiculo;
    printf("Digite a placa do veiculo (formato AAADDDD): ");
    scanf("%s", novoVeiculo.placa);

    printf("Digite a marca do veiculo: ");
    scanf(" %[^\n]", novoVeiculo.marca);

    printf("Digite o modelo do veiculo: ");
    scanf(" %[^\n]", novoVeiculo.modelo);

    printf("Digite o ano do veiculo: ");
    scanf("%d", &novoVeiculo.ano);

    veiculos[numVeiculos++] = novoVeiculo;
    printf("Veiculo cadastrado com sucesso.\n");
}

int verificarPlacaFormato(char placa[]) 
{
    int i;

    if (strlen(placa) != 7) 
	{
        return 0;
    }

    for (i = 0; i < 3; i++) 
	{
        if (!(placa[i] >= 'A' && placa[i] <= 'Z')) 
		{
            return 0;
        }
    }

    for (i = 3; i < 7; i++) 
	{
        if (!(placa[i] >= '0' && placa[i] <= '9')) 
		{
            return 0;
        }
    }

    return 1;
}

void imprimirPorAno() 
{
    int anoMin, anoMax;
    int i;

    printf("Digite o ano minimo: ");
    scanf("%d", &anoMin);

    printf("Digite o ano maximo: ");
    scanf("%d", &anoMax);

    printf("Veiculos cadastrados entre %d e %d:\n", anoMin, anoMax);
    for (i = 0; i < numVeiculos; i++) 
	{
        if (veiculos[i].ano >= anoMin && veiculos[i].ano <= anoMax) 
		{
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("----------------------\n");
        }
    }
}

int pesquisarPorPlaca(char placa[]) 
{
    int i;

    for (i = 0; i < numVeiculos; i++) 
	{
        if (strcmp(veiculos[i].placa, placa) == 0) 
		{
            return i;
        }
    }

    return -1;
}

void imprimirTodosVeiculos() 
{
    int i;

    printf("Veiculos cadastrados:\n");
    for (i = 0; i < numVeiculos; i++) 
	{
        printf("Placa: %s\n", veiculos[i].placa);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Ano: %d\n", veiculos[i].ano);
        printf("----------------------\n");
    }
}

int main() 
{
    int opcao;
    char placa[8];
    int indice;

    do {
        printf("Menu:\n");
        printf("1 - Cadastrar as informacoes de um veiculo\n");
        printf("2 - Verificar se uma placa esta no formato correto (AAADDDD)\n");
        printf("3 - Imprimir por ano\n");
        printf("4 - Pesquisar veiculo por placa\n");
        printf("5 - Imprimir todos os veiculos cadastrados\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) 
		{
            case 1:
                cadastrarVeiculo();
                break;
            case 2:
                printf("Digite a placa para verificar o formato: ");
                scanf("%s", placa);
                if (verificarPlacaFormato(placa)) 
				{
                    printf("Placa no formato correto.\n");
                } 
				else 
				{
                    printf("Placa no formato incorreto.\n");
                }
                break;
            case 3:
                imprimirPorAno();
                break;
            case 4:
                printf("Digite a placa do veiculo para pesquisar: ");
                scanf("%s", placa);
                indice = pesquisarPorPlaca(placa);
                if (indice != -1) 
				{
                    printf("Veiculo encontrado no indice %d.\n", indice);
                } 
				else 
				{
                    printf("Veiculo nao encontrado.\n");
                }
                break;
            case 5:
                imprimirTodosVeiculos();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }

        printf("----------------------\n");
    } while (opcao != 0);

    return 0;
}
