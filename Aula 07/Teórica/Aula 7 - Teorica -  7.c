// 7 - Elaborar um programa para ler o c�digo de um produto e informar a sua origem:
// a) C�digo do produto entre 1 e 20: Europa
// b) C�digo do produto entre 21 e 40: �sia
// c) C�digo do produto entre 41 e 60: Am�rica
// d) C�digo do produto entre 61 e 80: �frica
// e) C�digo do produto maior que 80: Paraguai

# include <stdio.h>

void regiaoProd ()
{
	int cod; 
	
	printf("Digite o codigo do seu produto: ");
	scanf("%d", &cod);
	
	printf("O codigo do produto = %d \n", cod);
	
	if (cod >= 0 && cod <= 20) 
  	{
    	printf("Europa");
  	} 
  	else if (cod >= 21 && cod <= 40) 
 	{
    	printf("Asia");
  	} 
  	else if (cod >= 41 && cod <= 60) 
  	{
    	printf("America");
  	}	 
  	else if (cod >= 61 && cod <= 80) 
  	{
    	printf("Africa");
  	}
  	else 
  	{
    	printf("Paraguai");
  	}
}

int main ()
{
	regiaoProd();
	return 0;
}
