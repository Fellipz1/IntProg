// 7- Usando uma fun��o que converta graus Fahrenheit em 
// Celsius (f�rmula C=5*(F � 32)/9 ), escreva um programa 
// que construa uma tabela de graus Celsius em fun��o de 
// Fahrenheit, de 50oF a 150oF, variando de 1 em 1. Use o 
// comando for.

#include<stdio.h>

float converterParaCelsius(float fahrenheit) {
    float celsius = 5 * (fahrenheit - 32) / 9;
    return celsius;
}

int main() {
    int fahrenheit;
    
    printf("Conversao de Fahrenheit para Celsius:\n");
    
    for (fahrenheit = 50; fahrenheit <= 150; fahrenheit++) {
        float celsius = converterParaCelsius(fahrenheit);
        printf("Graus Fahrenheit = %d \nAbaixo o equivalente em Celsius\nGraus Celsius = %.2f\n \n", fahrenheit, celsius);
    }
    
    return 0;
}
