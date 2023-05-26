// 2 - 

#include <stdio.h>

int calculoRepPorFaltas()
{
	int alunos;
	float nota;
	int faltas;
	int cont=1; 
	int aprovados=0;

	printf ("Digite o numero de alunos: \n");
	scanf ("%d",&alunos);
	
	while (cont <= alunos)
	{

	printf ("Digite o numero de faltas do aluno %d: \n", cont);
	scanf ("%d",&faltas);

	printf ("Digite a nota do aluno %d: \n", cont);
	scanf ("%f",&nota);

	if( faltas <= 5 && nota>=7)
	{
		aprovados++; 
	}
		cont ++;
	}
	return aprovados;
}

int main ()
{
	int condicao;

	condicao = calculoRepPorFaltas();
	printf ("O numero de alunos aprovados = %d", condicao);

	return 0;
}
