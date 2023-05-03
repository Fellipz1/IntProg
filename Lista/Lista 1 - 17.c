// 17 - Escreva uma função que receba dois números reais e um código de seleção do usuário. Se o código digitado for 1, faça o programa adicionar os dois números previamente digitados e imprimir o resultado; se o código de seleção for 2, os números devem ser multiplicados; se o código de seleção for 3, o primeiro número deve ser dividido pelo segundo. Se nenhuma das opções acima for escolhida, mostrar "Código inválido". Utilize múltipla escolha para resolver esta questão.

#include <stdio.h>

void operacao(float num1, float num2, int codigo) 
{
    switch (codigo) 
	{
        case 1:
            printf("Soma: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Multiplicacao: %.2f\n", num1 * num2);
            break;
        case 3:
            if (num2 != 0) {
                printf("Divisao: %.2f\n", num1 / num2);
            } else {
                printf("Divisao por zero nao pode ser executada.\n");
            }
            break;
        default:
            printf("Codigo invalido.\n");
    }
}

int main() 
{
    float num1, num2;
    int codigo;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    
    printf("Digite a operacao desejada:\n");
    printf("1 - Soma\n2 - Multiplicacao\n3 - Divisao\n");
    scanf("%d", &codigo);
    
    operacao(num1, num2, codigo);
    
    return 0;
}
