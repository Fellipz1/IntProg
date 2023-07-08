// 11) Escreva um programa para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// a) Horário: composto de hora, minutos e segundos.
// b) Data: composto de dia, mês e ano.
/// c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
// d) Faça um programa que leia 10 compromissos e imprima no formato 
// No dia dd/mm/aaaa as hh:mm:ss voce tem o compromisso XXXXXXXXX

// Letra A
#include<stdio.h>
int main ()
{
	struct horario
  	{
    	float hora;
    	float minutos;
    	float segundos;
  	};
  	struct horario horario;
  
  	printf("Cadastro do momento\n");
  
	printf("Digite a quantidade de horas: ");
	scanf("%f", &horario.hora);
	
	printf("Digite a quantidade em minutos: ");
	scanf("%f", &horario.minutos);  
	  
	printf("Digite a quantidade em segundos: ");
	scanf("%f", &horario.segundos);
	  
	printf("\nLendo os dados da struct \n");
	printf("Horas: %.0fh\n", horario.hora);
	printf("Minutos: %.0fmin\n" , horario.minutos);
	printf("Segundos: %.0fs\n" , horario.segundos);
	  
	getch();
	return(0);  
}

