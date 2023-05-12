// 1 - a) Escreva um programa que leia a nota de um aluno cujo valor está entre 0 e 100. O programa deve escrever “REPROVADO” se a nota for inferior a 70 e escrever “APROVADO”, caso contrário.

#include<stdio.h>
void nota()
{
	int nota;
	printf("Digite a nota do aluno: \n");
	scanf("%d", &nota);
	
	if(nota>=70 && nota<101)
	{
		printf("Aprovado");
	}
	else if (nota < 70 && nota>=0)
	{
		printf("Reprovado");
	}
		else{
			printf("Nota invalida");
		}
}
int main ()
{
	nota();
	return 0;	
}
