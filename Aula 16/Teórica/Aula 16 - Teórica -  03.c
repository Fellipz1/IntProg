// 3) Considerando a estrutura do exercício (2) e a declaração:
// medidas João, Maria;
// -> Escreva instruções para atribuir: 1.78 à altura de João; 1.64 à altura de Maria; 75 ao peso de João; 59 ao peso de Maria.
// -> Escreva um conjunto de instruções para imprimir a média das alturas e a média dos pesos de João e Maria.

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
