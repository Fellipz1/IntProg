// 18 - Elabore uma fun��o que calcule o �ndice de massa corporal (IMC) de uma pessoa recebendo a altura e o peso. Para isso, pe�a ao usu�rio para digitar seu peso (em Kg) e sua altura (em m), calcule o valor do seu IMC e imprima-o. O IMC � determinado pela divis�o do peso da pessoa pelo quadrado de sua altura. Com peso de 61.5 Kg e altura de 1.70 m, o programa deve exibir:

#include <stdio.h>
#include <math.h>

void imc(float peso, float altura) {
    float imc = peso / pow(altura, 2);
    printf("Seu IMC = %.2f\n", imc);
}

int main() {
    float peso, altura;
    
    printf ("INDICE DE MASSA CORPORAL \n");
    
    printf("Digite o seu peso (em Kg): ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura (em m): ");
    scanf("%f", &altura);
    
    imc(peso, altura);
    
    return 0;
}
