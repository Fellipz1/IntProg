/* 17. Uma empresa deseja desenvolver um sistema que contém os dados de seus funcionários. O cadastro de cada um deles deve conter os seguintes campos: nome, endereço, telefone, e-mail, data
de aniversário (dia, mês e ano) e o ano de chegada à empresa. Desenvolva um sistema para executar cada uma das seguintes ações:

a) Ler a quantidade de funcionários (o usuário digitará a quantidade);

b) Cadastrar os funcionários;

c) Imprimir uma lista com os dias de nascimento dos funcionários nascidos em um mês desejado;

d) Imprimir o nome e o telefone dos funcionários com uma quantidade específica de anos de empresa;
*/

#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome[100];
    char endereco[100];
    char telefone[25];
    char email[50];
    int dia;
    int mes;
    int ano;
    int ano_de_entrada;
} Funcionario;

void cadastrarFuncionarios(int quantidade, Funcionario funcionarios[]) {
    int i;
    for (i = 0; i < quantidade; i++) {
        printf("Cadastro do funcionario %d:\n", i + 1);

        printf("Digite o nome completo do funcionario: ");
        fflush(stdin);
        fgets(funcionarios[i].nome, 100, stdin);

        printf("Digite o endereco: ");
        fflush(stdin);
        fgets(funcionarios[i].endereco, 100, stdin);

        printf("Informe o telefone: ");
        fflush(stdin);
        fgets(funcionarios[i].telefone, 25, stdin);

        printf("Informe o e-mail: ");
        fflush(stdin);
        fgets(funcionarios[i].email, 50, stdin);

        printf("Digite a data de aniversario:\n");
        printf("Dia: ");
        scanf("%d", &funcionarios[i].dia);

        printf("Mes: ");
        scanf("%d", &funcionarios[i].mes);

        printf("Ano: ");
        scanf("%d", &funcionarios[i].ano);

        printf("Ano de entrada na empresa: ");
        scanf("%d", &funcionarios[i].ano_de_entrada);
    }
}

void imprimirDiasNascimento(int quantidade, Funcionario funcionarios[], int mes) {
    printf("Funcionarios com aniversario no mes %d:\n", mes);
    int i;
    for (i = 0; i < quantidade; i++) {
        if (funcionarios[i].mes == mes) {
            printf("%s - Dia: %d\n", funcionarios[i].nome, funcionarios[i].dia);
        }
    }
}

void imprimirFuncionariosAnosEmpresa(int quantidade, Funcionario funcionarios[], int anos) {
    time_t now;
    struct tm *data_atual;
    time(&now);
    data_atual = localtime(&now);
    int ano_atual = data_atual->tm_year + 1900;

    printf("Funcionarios com %d anos de empresa:\n", anos);
    int i;
    for (i = 0; i < quantidade; i++) {
        int anos_empresa = ano_atual - funcionarios[i].ano_de_entrada;
        if (anos_empresa == anos) {
            printf("Nome: %s - Telefone: %s\n", funcionarios[i].nome, funcionarios[i].telefone);
        }
    }
}

int main() {
    int quantidade;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quantidade);

    Funcionario funcionarios[quantidade];

    cadastrarFuncionarios(quantidade, funcionarios);

    int mes;
    printf("\nDigite o mes desejado para listar os funcionarios com aniversario: ");
    scanf("%d", &mes);
    imprimirDiasNascimento(quantidade, funcionarios, mes);

    int anos;
    printf("\nDigite a quantidade de anos de empresa desejada: ");
    scanf("%d", &anos);
    imprimirFuncionariosAnosEmpresa(quantidade, funcionarios, anos);

    return 0;
}
