// 12 - Faça uma função que receba o ano atual e o ano de nascimento de uma pessoa e imprima sua idade. A seguir, imprima se a pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 50 anos) ou idosa (51 anos em diante).
/*
#include <stdio.h>

void idade(int da, int ma, int aa, int dn, int mn, int an) //idade=idade/ da=dia atual; ma= mês atual; aa=ano atual; dn=dia do nascimento; mn=mês do nascimento; an=ano do nascimento
{
	int idade = aa - an;

	if (ma < mn || (ma == mn && da < dn))
	{
		idade--;
	}

	printf("A idade da pessoa e: %d anos\n", idade);

	if (idade >= 0 && idade <= 3) 
	{
		printf("A pessoa e um bebe\n");
  	} 
  	else if (idade >= 4 && idade <= 10) 
  	{
    	printf("A pessoa e uma crianca\n");
  	} 
  	else if (idade >= 11 && idade <= 18) 
 	{
    	printf("A pessoa e um adolescente\n");
  	} 
  	else if (idade >= 19 && idade <= 50) 
  	{
    	printf("A pessoa e um adulto\n");
  	}	 
  	else 
  	{
    	printf("A pessoa e uma idosa\n");
  	}
}

int main() 
{
  int da, ma, aa;
  int dn, mn, an;
  
printf("As datas devem seguir o formato: dd/mm/aaaa, exemplo: 16/04/2023\n");
  printf("Digite a data atual: \n");
  scanf("%d %d %d", &da, &ma, &aa);

  printf("Digite a data de nascimento: \n");
  scanf("%d %d %d", &dn, &mn, &an);

  idade(da, ma, aa, dn, mn, an);

  return 0;
}
*/
// Abaixo segue o teste de mesa
/*

*/

