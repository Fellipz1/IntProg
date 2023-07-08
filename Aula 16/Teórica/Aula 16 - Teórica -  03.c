// 3) Considerando a estrutura do exerc�cio (2) e a declara��o:
// medidas Jo�o, Maria;
// -> Escreva instru��es para atribuir: 1.78 � altura de Jo�o; 1.64 � altura de Maria; 75 ao peso de Jo�o; 59 ao peso de Maria.
// -> Escreva um conjunto de instru��es para imprimir a m�dia das alturas e a m�dia dos pesos de Jo�o e Maria.

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

    printf("\nM�dia das alturas: %.1f cm\n", media_alturas);
    printf("M�dia dos pesos: %.2f kg\n", media_pesos);

    return 0;
}
