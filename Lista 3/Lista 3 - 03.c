/* 3. Desenvolva uma função que receba como parâmetro duas variáveis da estrutura est_Data,
representada abaixo (tipo de dado Data):
typedef struct est_Data
{
int dia;
int mes;
int ano;
} Data;
Essa estrutura representa uma data válida e é composta por três valores inteiros: dia, mês e ano.
A função deve retornar o número de dias que separara uma data da outra.
*/

#include <stdio.h>

typedef struct est_Data
{
	int dia;
	int mes;
	int ano;
} Data;
int anoBissexto(int ano)
{
	if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int dias(Data data1, Data data2)
{
    int totalDias = 0;

    int data1Antes = 1;
    if (data1.ano > data2.ano || (data1.ano == data2.ano && data1.mes > data2.mes) || (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia))
    {
        Data temp = data1;
        data1 = data2;
        data2 = temp;
        data1Antes = 0;
    }

    int diasAnoInicio = 0;
    int diasAnoFim = 0;
    int i;

    // Calcula o número de dias do ano de início até o final do ano
    for (i = data1.mes; i <= 12; i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasAnoInicio += 31;
                break;
            case 4: case 6: case 9: case 11:
                diasAnoInicio += 30;
                break;
            case 2:
                if (anoBissexto(data1.ano))
                    diasAnoInicio += 29;
                else
                    diasAnoInicio += 28;
                break;
        }
    }
    diasAnoInicio -= data1.dia;

    for (i = 1; i < data2.mes; i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diasAnoFim += 31;
                break;
            case 4: case 6: case 9: case 11:
                diasAnoFim += 30;
                break;
            case 2:
                if (anoBissexto(data2.ano))
                    diasAnoFim += 29;
                else
                    diasAnoFim += 28;
                break;
        }
    }
    diasAnoFim += data2.dia;

    int anosCompletos = data2.ano - data1.ano - 1;
    int diasAnosCompletos = anosCompletos * 365;
    for (i = data1.ano + 1; i < data2.ano; i++)
    {
        if (anoBissexto(i))
            diasAnosCompletos++;
    }

    totalDias = diasAnoInicio + diasAnoFim + diasAnosCompletos;

    if (data1Antes)
        return totalDias;
    else
        return -totalDias;
}
int main()
{
	Data data1, data2;
	printf("Digite a primeira data (dd/mm/aaaa): \n");
	printf("Digite o dia: \n");
	scanf("%d", &data1.dia);
	printf("Digite o mes: \n");
	scanf("%d", &data1.mes);	
	printf("Digite o ano: \n");
	scanf("%d", &data1.ano);
	printf("Digite a segunda data (dd/mm/aaaa): \n");
	printf("Digite o dia: \n");
	scanf("%d", &data2.dia);
	printf("Digite o mes: \n");
	scanf("%d", &data2.mes);	
	printf("Digite o ano: \n");
	scanf("%d", &data2.ano);
	int total = dias(data1, data2);
	printf("Numero de dias entre as datas: %d\n", total);
	
	return 0;
}
