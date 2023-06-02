// 4- Chico tem 1,50 metro e cresce 2 centímetros por ano, 
// enquanto Zé tem 1,40 metro e cresce 3 centímetros por 
// ano. Construa um programa que calcule e imprima 
// quantos anos serão necessários para que Zé seja maior 
// que Chico. Use o comando do-while.

#include <stdio.h>
void diferencaDeAltura ()
{
	int anos,cont;
	int alturaZe, alturaChico, newalturaChico, newalturaZe;
	
	printf ("Digite qual a altura em centimetros de Chico: \n");
	scanf("%d",&alturaChico);
	printf ("Digite qual a altura em centimetros de Ze: \n");
	scanf("%d",&alturaZe);
	
	cont = 1;
	anos = 1;
		
	do 
	{
		newalturaChico = alturaChico+(2*anos);
		newalturaZe = alturaZe+(3*anos);
		cont++;
		anos++;
		
	}while(newalturaChico>newalturaZe);
	printf("Foram necessarios %d anos para Ze ficar maior que Chico",anos);
}

int main ()
{
	diferencaDeAltura ();
	return 0;
}
