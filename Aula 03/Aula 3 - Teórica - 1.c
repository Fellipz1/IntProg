// 1 - Construa uma sequ�ncia de instru��es para calcular o volume de um copo com 12 cm de altura e 6 cm de di�metro, da seguinte forma:
/*
� Declare as vari�veis para raio, altura e volume;
� Inicialize as vari�veis cujo valor � conhecido;
� Calcule o valor do volume e armazene-o na vari�vel.
*/
#include <stdio.h>

int main() 
{
   float raio, altura, pi, volume;

   raio = 3; //6/2 diametro/2 = raio, o raio � metade do di�metro
   altura = 12;
   pi = 3.1415;
   
   volume = pi * raio * raio * altura; // f�rmula do volume do cilindro

   printf("O volume do copo: %.2f cm�\n", volume); // o .2 � para a quantidade de casas decimais, teremos duas casas decimais

   return 0;
}
