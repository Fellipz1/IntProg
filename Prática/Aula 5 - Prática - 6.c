// 6 - 6. Considerando o crit�rio de aprova��o de uma disciplina que determina que um aluno est� aprovado se a m�dia ponderada de suas tr�s provas for maior ou igual a 5.0, onde a m�dia � dada pela f�rmula:
// media = (p1 + p2 + 2.0 * p3) / 4.0
// a) Escreva uma fun��o que receba como par�metros as notas das duas primeiras provas de um aluno (p1 e p2) e retorne a nota m�nima que o aluno precisa na terceira prova para que seja aprovado.
// b) Escreva um programa que leia do teclado as duas primeiras notas de um aluno, chame a fun��o do item anterior e imprima a nota m�nima que o aluno precisa tirar na p3 para que seja aprovado.

/*
#include <stdio.h>

void nota3min (float nota1, float nota2, float med){
	float nota3;
	nota3 = (med*4-nota1-nota2)/2;
	printf ("Sua nota minima na terceira prova para ser aprovado = %.2f", nota3);
}
int main (){
	float nota1; 
	float nota2;
	float med=5;
	printf ("Digite a nota da sua primeira prova: \n");
	scanf ("%f", &nota1);
	printf ("Digite a nota da sua segunda prova: \n");
	scanf ("%f", &nota2);

	nota3min (nota1, nota2, med);
	
	return 0;
}

