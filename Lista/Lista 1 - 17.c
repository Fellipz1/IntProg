// 17 - Escreva uma fun��o que receba dois n�meros reais e um c�digo de sele��o do usu�rio. Se o c�digo digitado for 1, fa�a o programa adicionar os dois n�meros previamente digitados e imprimir o resultado; se o c�digo de sele��o for 2, os n�meros devem ser multiplicados; se o c�digo de sele��o for 3, o primeiro n�mero deve ser dividido pelo segundo. Se nenhuma das op��es acima for escolhida, mostrar "C�digo inv�lido". Utilize m�ltipla escolha para resolver esta quest�o.

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
