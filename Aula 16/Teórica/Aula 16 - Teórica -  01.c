// 1) Defina uma estrutura para representar as informa��es de um cart�o de cr�dito. Voc� precisa apenas criar a estrutura com os dados e tipos apropriados. N�o � necess�rio criar um programa para utiliz�-la.

#include <stdio.h>
int main()
{
	struct dados_do_Cartao
	{
		char nome[50];
		char numero[30];
		char data_de_validade[20];
		float codigo_cartao;
	};
	struct dados_do_Cartao usuario;
  
	printf("Cadastro de usuario do catao\n");
  
	printf("Nome no cartao do usuario: ");
	fflush(stdin);
	fgets(usuario.nome, 50, stdin);
  
	printf("Numero do cartao: ");
	fflush(stdin);
	fgets(usuario.numero, 30, stdin);
  
	printf("Informe a data de validade do cartao: ");
	fflush(stdin);
	fgets(usuario.data_de_validade, 20, stdin);
  
	printf("Informe o codigo de seguranca do cartao: ");
	scanf("%f", &usuario.codigo_cartao);
  
	printf("\nLendo os dados da struct \n");
	printf("Nome: %s", usuario.nome);
	printf("Numero do cartao: %s", usuario.numero);
	printf("Data de validade do cartao: %s" , usuario.data_de_validade);
	printf("Codigo de seguranca do cartao: %.0f\n" , usuario.codigo_cartao);
  
	getch();
	return(0);
}
