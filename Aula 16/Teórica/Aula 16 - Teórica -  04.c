// 4) Faça um programa (função principal) para leitura, via teclado, dos dados de um atleta. Os dados a serem guardados na estrutura atleta são os seguintes: nome, medidas (estrutura definida
// no exercício 2), esporte praticado e idade. Ao final, imprima estas informações na tela. 

#include <stdio.h>

struct atleta
{
    char nome[50];
    float peso;
    float altura;
    char esporte[50];
    int idade;
};

int main()
{
    struct atleta jogador;

    printf("Digite o nome do atleta: ");
    fgets(jogador.nome, 50, stdin);

    printf("Informe o peso do atleta (em kg): ");
    scanf("%f", &jogador.peso);

    printf("Informe a altura do atleta (em cm): ");
    scanf("%f", &jogador.altura);

    getchar(); // Limpa o caractere de nova linha pendente

    printf("Informe o esporte praticado pelo atleta: ");
    fgets(jogador.esporte, 50, stdin);

    printf("Informe a idade do atleta: ");
    scanf("%d", &jogador.idade);

    printf("\nDados do atleta:\n");
    printf("Nome: %s", jogador.nome);
    printf("Peso: %.2f kg\n", jogador.peso);
    printf("Altura: %.1f cm\n", jogador.altura);
    printf("Esporte: %s", jogador.esporte);
    printf("Idade: %d anos\n", jogador.idade);

    return 0;
}
