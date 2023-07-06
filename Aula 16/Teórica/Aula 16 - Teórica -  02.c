// 2) Defina uma estrutura chamada medidas para representar o peso a altura de uma pessoa.

#include<stdio.h>
int main ()
{
	struct peso_altura
  	{
    	char nome[50];
    	float peso;
    	float altura;
  	};
  	struct peso_altura pessoa;
  
  	printf("Cadastro da pessoa\n");
  
	printf("Digite seu nome: ");
	fflush(stdin);
	fgets(pessoa.nome, 50, stdin);
	
	printf("Informe o seu peso (em kg): ");
	scanf("%f", &pessoa.peso);  
	  
	printf("Informe sua altura (em cm): ");
	scanf("%f", &pessoa.altura);
	  
	printf("\nLendo os dados da struct \n");
	printf("Nome: %s", pessoa.nome);
	printf("Peso = %.2f kg\n" , pessoa.peso);
	printf("Altura = %.1f cm\n" , pessoa.altura);
	  
	getch();
	return(0);  
}
