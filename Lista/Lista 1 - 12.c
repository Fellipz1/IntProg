// 12 - Faça uma função que receba o ano atual e o ano de nascimento de uma pessoa e imprima sua idade. A seguir, imprima se a pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 50 anos) ou idosa (51 anos em diante).

#include <stdio.h>

void idade(int da, int ma, int aa, int dn, int mn, int an) //idade=idade/ da=dia atual; ma= mês atual; aa=ano atual; dn=dia do nascimento; mn=mês do nascimento; an=ano do nascimento
{
	int idade = aa - an;

	if (ma < mn || (ma == mn && da < dn))
	{
		idade = idade - 1;
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

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Para esse teste utilizamos a data atual como 29/04/2023 e a data de nascimento como 11/12/2002
/*
// Teste 1
							main						|	void
Linha 	da		ma		aa		dn		mn		an		|	idade		condição1 		condição2
36		?		?		?		?		?		?		|	?			?				?
38		?		?		?		?		?		?		|	?			?				?
39		?		?	 	?		?		?		?		|	?			?				?
41		?		?		?		?		?		?		|	?			?				?			Imprime: As datas devem seguir o formato: dd/mm/aaaa, exemplo: 16/04/2023
42		?		?		?		?		?		?		|	?			?				?			Imprime: Digite a data atual:
43		29		04		2023	?		?		?		|	?			?				?		
45		29		04		2023	?		?		?		|	?			?				?			Imprime: Digite a data de nascimento:		
46		29		04		2023	11		12		2002	|	?			?				?
48		29		04		2023	11		12		2002	|	?			?				?
3		29		04		2023	11		12		2002	|	?			?				?	
5		29		04		2023	11		12		2002	|	20			?				?
7		29		04		2023	11		12		2002	|	20			V				?
9		29		04		2023	11		12		2002	|	20			V				?
12 		29		04		2023	11		12		2002	|	20			V				?			Imprime: A idade da pessoa e: 20 anos 
14		29		04		2023	11		12		2002	|	20			V				F
16		29		04		2023	11		12		2002	|	20			V				F
18		29		04		2023	11		12		2002	|	20			V				F
20		29		04		2023	11		12		2002	|	20			V				F
22		29		04		2023	11		12		2002	|	20			V				F
24		29		04		2023	11		12		2002	|	20			V				F
26  	29		04		2023	11		12		2002	|	20			V				V
28		29		04		2023	11		12		2002	|	20			V				V			Imprime: A pessoa e um adulto 
50
*/
