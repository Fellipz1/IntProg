// 8 -Uma empresa tem 30 funcion�rios e resolveu conceder a todos um aux�lio mensal de R$60,00 por m�s para cada dependente menor de 18 anos. 
// Escreva um programa que, para cada um dos 30 funcion�rios, leia seu n�mero de dependentes. Em seguida, o programa deve ler a idade de cada dependente e imprimir o valor total do aux�lio que este funcion�rio receber�.
// Voc� pode criar fun��es, se achar necess�rio.
// Obs: Precisar� de mais contadores. Analise bem o problema.

#include <stdio.h>

int main() {
	int numFuncionarios = 30;
	int auxilioDependente = 60;
    int numDependentes, idade, totalAuxilio;
    int funcionario = 1;

    while (funcionario <= numFuncionarios) {
        printf("Funcionario %d\n", funcionario);
        printf("Digite o numero de dependentes: ");
        scanf("%d", &numDependentes);

        totalAuxilio = 0;
        int pd = 1;

        while (pd <= numDependentes) {
            printf("Digite a idade do dependente %d: ", pd);
            scanf("%d", &idade);

            if (idade < 18) {
                totalAuxilio += auxilioDependente;
            }

            pd++;
        }

        printf("Total de auxilio para o funcionario %d: R$%d\n\n", funcionario, totalAuxilio);
        funcionario++;
    }

    return 0;
}
