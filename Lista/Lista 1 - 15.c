// 15 - Desenvolva um algoritmo que leia duas notas de prova e uma de trabalho (todos os valores entre 0 e 10) de um aluno e sua frequência, definindo e imprimindo se ele foi aprovado, reprovado ou se fará prova final. O aluno será reprovado se faltou mais de 15 aulas. Será aprovado se não for reprovado por falta e sua média for maior que 7,0. Caso tenha média menor, deverá fazer prova final. O cálculo da média deve ser feito com peso 3 para a primeira prova, 5 para a segunda prova e 2 para o trabalho.
/*
#include <stdio.h>

void calculoMedeRepPorFaltas()
{
	float nota1, nota2, notaTrab, faltas, med;
	
	printf ("Digite o numero de faltas: \n");
	scanf ("%f",&faltas);
	
	printf ("Digite a nota da prova 1: \n");
	scanf ("%f",&nota1);
	
	printf ("Digite a nota da prova 2: \n");
	scanf ("%f",&nota2);
	
	printf ("Digite a nota do trabalho: \n");
	scanf ("%f",&notaTrab);

	if(	faltas <= 15 ){
		med = (nota1*3)+(nota2*5)+(notaTrab*2); 
		med = med/10;
		if ( med>=7){
			printf ("Aprovado por nota\n");
		}else if(med<7 && med>=4){
			printf("Voce esta de prova final\n");
		}
		else {
			printf ("Voce esta reprovado por nota\n");
		}
		printf ("Sua media = %f", med);
	}
	else{
		printf ("Reprovado por faltas");
	}		
}

int main ()
{
	calculoMedeRepPorFaltas();
	return 0;
}
*/
// Abaixo segue o teste de mesa
/*

*/

