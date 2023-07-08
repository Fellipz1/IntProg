// 11) Escreva um programa para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
// a) Horário: composto de hora, minutos e segundos.
// b) Data: composto de dia, mês e ano.
/// c) Compromisso: composto de uma data, horário e texto que descreve o compromisso.
// d) Faça um programa que leia 10 compromissos e imprima no formato 
// No dia dd/mm/aaaa as hh:mm:ss voce tem o compromisso XXXXXXXXX

//Letra D
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
int main()
{
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

