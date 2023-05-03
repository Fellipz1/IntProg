// 10 - Faça uma função que imprima se um número real recebido como parâmetro é positivo, negativo ou neutro (zero).

#include <stdio.h>

void pnz(float num) //pnz= positivo, negativo ou zero
 {
  if (num > 0) 
  {
    printf("O numero e positivo\n");
  } 
  else if (num < 0)
  {
    printf("O numero e negativo\n");
  } 
  else 
  {
    printf("O numero e zero\n");
  }
}

int main() 
{
  float num;
  
  printf("Digite um numero real: ");
  scanf("%f", &num);

  pnz(num);

  return 0;
}

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer um teste com 4 e outro com -4 e outro com 0
/*
// Teste 1
		main		void
Linha 	numero		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite um numero real:  
24		4			?
26		4			?		
3		4			?			
5		4			V	
7		4			V			Imprime: O numero e positivo 
28	

// Teste 2
		main		void
Linha 	numero		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite um numero real:  
24		-4			?
26		-4			?		
3		-4			?			
5		-4			F	
7		-4			F			
9		-4			V
11		-4			V			Imprime: O numero e negativo									
28	

// Teste 3
Linha 	numero		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite um numero real:  
24		0			?
26		0			?		
3		0			?			
5		0			F	
7		0			F			
9		0			F
11		0			F									
13		0			V
15		0			V			Imprime: O numero e zero
28
*/
