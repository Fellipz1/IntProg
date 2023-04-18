// 1 - Construa uma sequência de instruções para calcular o volume de um copo com 12 cm de altura e 6 cm de diâmetro, da seguinte forma:
/*
• Declare as variáveis para raio, altura e volume;
• Inicialize as variáveis cujo valor é conhecido;
• Calcule o valor do volume e armazene-o na variável.
*/
#include <stdio.h>

int main() 
{
   float raio, altura, pi, volume;

   raio = 3; //6/2 diametro/2 = raio, o raio é metade do diâmetro
   altura = 12;
   pi = 3.1415;
   
   volume = pi * raio * raio * altura; // fórmula do volume do cilindro

   printf("O volume do copo: %.2f cm³\n", volume); // o .2 é para a quantidade de casas decimais, teremos duas casas decimais

   return 0;
}
