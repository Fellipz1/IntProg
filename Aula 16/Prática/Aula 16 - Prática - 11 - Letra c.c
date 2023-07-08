// 11) Escreva um programa para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// a) Horário: composto de hora, minutos e segundos.
// b) Data: composto de dia, mês e ano.
/// c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
// d) Faça um programa que leia 10 compromissos e imprima no formato 
// No dia dd/mm/aaaa as hh:mm:ss voce tem o compromisso XXXXXXXXX

//Letra C
#include<stdio.h>
int main ()
{
	struct compromisso
  	{
    	float dia;
    	float mes;
    	float ano;
    	float hora;
    	float minutos;
    	float segundos;
    	char descricao[200];
  	};
  	struct compromisso date;
  
  	printf("Cadastro:\n");
  
	printf("Digite o dia: ");
	scanf("%f", &date.dia);
	
	printf("Digite o mes: ");
	scanf("%f", &date.mes);  
	  
	printf("Digite o ano: ");
	scanf("%f", &date.ano);
	  
	printf("Digite a quantidade de horas: ");
	scanf("%f", &date.hora);
	
	printf("Digite a quantidade em minutos: ");
	scanf("%f", &date.minutos);  
	  
	printf("Digite a quantidade em segundos: ");
	scanf("%f", &date.segundos);
	
	printf("Descreva o seu compromisso: ");
	fflush(stdin);
	fgets(date.descricao, 200, stdin);
	  
	printf("\nLendo os dados da struct \n");
	printf("Dias: %.0f\n", date.dia);
	printf("Mes: %.0f\n" , date.mes);
	printf("Ano: %.0f\n" , date.ano);
	printf("Horas: %.0fh\n", date.hora);
	printf("Minutos: %.0fmin\n" , date.minutos);
	printf("Segundos: %.0fs\n" , date.segundos);
	printf("Descricao do comprimisso: %s", date.descricao);
	
	getch();
	return(0);  
}

