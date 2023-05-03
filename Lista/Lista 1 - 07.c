// 7 - Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a 70, imprimir na tela "APROVADO", se for menor, imprimir "REPROVADO". Testar ainda se o valor lido foi maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA".

#include <stdio.h>

void verificacaoNota(float nota)
{
    if (nota < 0 || nota > 100) 
	{
        printf("Nota Invalida\n");
    } 
	else if (nota >= 70) 
	{
        printf("Aprovado\n");
    } 
	else 
	{
        printf("Reprovado\n");
    }
}

int main() 
{
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    verificacaoNota(nota);

    return 0;
}

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer o teste com 80 e outro com 60 e um com 110
/*
// Teste 1
		main		void
Linha 	nota		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite a nota do aluno:  
24		80			?
26		80			?		
3		80			?			
5		80			F	
7		80			F
9		80			V
11		80			V			Imprime: Aprovado
28		

// Teste 2
		main		void
Linha 	nota		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite a nota do aluno:  
24		60			?
26		60			?		
3		60			?			
5		60			F	
7		60			F
9		60			F
11		60			F			
13		60			V		
15		60			V			Imprime: Reprovado
28

// Teste 3
		main		void
Linha 	nota		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite a nota do aluno:  
24		110			?
26		110			?		
3		110			?			
5		110			V	
7		110			V			Imprime: Nota Invalida		
28
*/
