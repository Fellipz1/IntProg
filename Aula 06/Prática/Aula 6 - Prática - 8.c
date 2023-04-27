// 8 - Construa a função calculaPesoIdeal que recebe o sexo e a altura de uma pessoa como parâmetros. A função deve calcular e retornar o peso ideal da pessoa, utilizando uma das seguintes fórmulas:
// • masculino: (72.7 * alt) - 58;
// • feminino: (62.1 * alt) - 44.7.
// Faça um programa que lê o sexo, a altura e o peso de uma pessoa e imprime se esta pessoa está ou não com o peso ideal.
// Teste seu programa com os valores F, 1.71 e 59.5 e com F, 1.71 e 61.491001


#include <stdio.h>

float calculaPesoIdeal(char sexo, float alt) {
    float pesoIdeal;
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * alt) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * alt) - 44.7;
    } else {
        printf("Sexo invalido.\n");
        pesoIdeal = -1;
    }
    return pesoIdeal;
}

int main() {
    char sexo;
    float alt, peso, pesoIdeal;

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("Digite a altura em metros: ");
    scanf("%f", &alt);

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    pesoIdeal = calculaPesoIdeal(sexo, alt);

    if (pesoIdeal != -1) {
        if (peso == pesoIdeal) {
            printf("Voce esta no peso ideal.\n");
        } else if (peso < pesoIdeal) {
            printf("Voce esta abaixo do peso ideal.\n");
        } else {
            printf("Voce esta acima do peso ideal.\n");
        }
    }

    return 0;
}


/*
// Teste para F, 1.71 e 59.5, considerando sexo, alt e peso.
Digite o sexo (M ou F): f
Digite a altura em metros: 1.71
Digite o peso em kg: 59.5
Voce esta abaixo do peso ideal.
// Teste para F, 1.71 e 61.491001, considerando sexo, alt e peso.
Digite o sexo (M ou F): f
Digite a altura em metros: 1.71
Digite o peso em kg: 61.491001
Voce esta no peso ideal.
*/

