// 11) Escreva um programa para fazer a cria��o dos novos tipos de dados conforme solicitado abaixo:
// a) Hor�rio: composto de hora, minutos e segundos.
// b) Data: composto de dia, m�s e ano.
/// c) Compromisso: composto de uma data, hor�rio e texto que descreve o compromisso.
// d) Fa�a um programa que leia 10 compromissos e imprima no formato 
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

