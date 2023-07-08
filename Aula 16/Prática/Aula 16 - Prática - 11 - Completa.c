// 11) Escreva um programa para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// a) Horário: composto de hora, minutos e segundos.
// b) Data: composto de dia, mês e ano.
/// c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
// d) Faça um programa que leia 10 compromissos e imprima no formato 
// No dia dd/mm/aaaa as hh:mm:ss voce tem o compromisso XXXXXXXXX

/*
Letra A
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
*/

/*
Letra B
#include<stdio.h>
int main ()
{
	struct data
  	{
    	float dia;
    	float mes;
    	float ano;
  	};
  	struct data data;
  
  	printf("Cadastro do dia\n");
  
	printf("Digite o dia: ");
	scanf("%f", &data.dia);
	
	printf("Digite o mes: ");
	scanf("%f", &data.mes);  
	  
	printf("Digite o ano: ");
	scanf("%f", &data.ano);
	  
	printf("\nLendo os dados da struct \n");
	printf("Dias: %.0f\n", data.dia);
	printf("Mes: %.0f\n" , data.mes);
	printf("Ano: %.0f\n" , data.ano);
	  
	getch();
	return(0);  
}
*/
/*
Letra C
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
*/

// Letra D
#include <stdio.h>
#include <string.h>
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
int main(){
  	struct compromisso date[10];
    int i, j;
    //struct date momento;
    for(i = 0; i < 10; i++){
  	printf("Cadastro momento %d:\n",i+1);
  
	printf("Digite o dia: ");
	scanf("%f", &date[i].dia);
	
	printf("Digite o mes: ");
	scanf("%f", &date[i].mes);  
	  
	printf("Digite o ano: ");
	scanf("%f", &date[i].ano);
	  
	printf("Digite a quantidade de horas: ");
	scanf("%f", &date[i].hora);
	
	printf("Digite a quantidade em minutos: ");
	scanf("%f", &date[i].minutos);  
	  
	printf("Digite a quantidade em segundos: ");
	scanf("%f", &date[i].segundos);
	
	printf("Descreva o seu compromisso: ");
	fflush(stdin);
	fgets(date[i].descricao, 200, stdin);

	printf("No dia %.0f/%.0f/%.0f as %.0f:%.0f:%.0f voce tem o compromisso %s", date[i].dia, date[i].mes,date[i].ano,date[i].hora, date[i].minutos,date[i].segundos,date[i].descricao);

	}
    return 0;
}
