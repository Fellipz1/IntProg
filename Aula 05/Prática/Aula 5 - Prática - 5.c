// 5 - Faça uma função que receba por parâmetro um tempo expresso em segundos e imprima na tela esse mesmo tempo em horas, minutos e segundos.
// Elabore também um programa para ler este valor do teclado e chamar a função. Para a entrada 13579, o programa deverá imprimir:

/*
#include <stdio.h>

void tempo (int s){
	int m, h;
	int s2;
	h = s/3600;
	m = s/60 %60;
	s2 = s %60;
	printf ("%d horas, ", h);
	printf("%d minutos e ", m);
	printf ("%d segundos", s2);	
}
int main (){
	int seg;
	printf("Digite a quantidade em segundos: \n");
	scanf ("%d", &seg);
	tempo (seg);
	return 0;
}
*/
