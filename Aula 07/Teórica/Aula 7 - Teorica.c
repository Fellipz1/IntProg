// 1) Elabore uma fun��o que receba como par�metros dois n�meros inteiros e imprima uma mensagem se um for divis�vel pelo outro.
// Em seguida, fa�a um programa que leia um n�mero inteiro do teclado e chame a fun��o para verificar se este n�mero � divis�vel por 2, por 3, por 5 e por 7 (ser�o 4 chamadas). Fa�a um teste de mesa com o valor 14.

// Resposta
/*
#include <stdio.h>

void verificacaoDivisibilidade (int x, int y)
{
	if ( x % y == 0)
	{
		printf("O numero %d e divisivel por %d", x, y);
	}
	else
	{
		printf("O numero %d nao e divisivel por %d", x, y);
	}
}
int main()
{
	int x, y;
	
	printf("Digite um valor: \n");
	scanf("%d", &x);
	
	printf("Para que o primeiro seja dividido por ele. \nDigite um segundo valor: ");
	scanf("%d", &y);
	
	verificacaoDivisibilidade(x, y);
	
	return 0;
}
*/

/*
#include <stdio.h>

void verificacaoDivisibilidade (int x, int y)
{
	if ( x % y == 0)
	{
		printf("O numero %d e divisivel por %d\n", x, y);
	}
	else
	{
		printf("O numero %d nao e divisivel por %d\n", x, y);
	}
}
int main()
{
	int x, y;
	
	printf("Digite um valor: \n");
	scanf("%d", &x);
	
	verificacaoDivisibilidade(x,2);
	verificacaoDivisibilidade(x,3);
	verificacaoDivisibilidade(x,5);
	verificacaoDivisibilidade(x,7);
	
	return 0;
}
*/

// 2 - O que � impresso neste programa?
/*
int main()
{
	int a = 2;
	int b = 3;
	int c = 4;
	
	if ((a<2)&&((b!=3)||(c==3)))
		printf("saida 1");
	if ((c==3)||(c==4))
		printf("saida 2");
	if ((a<3)&&(b>4))
		printf("saida 3");
	else 
		if (a==2)
			if(b==5)
				printf("saida4");
			else
				printf("saida5");
		else
			printf("saida5");
	return 0;		
}
*/

// Resposta: Sa�da 2 e sa�da 5.

// 3 -  Fa�a um programa para ler dois n�meros e um caractere: ' + ', ' - ', ' * ' e ' / '. O programa deve imprimir o resultado da opera��o efetuada sobre os n�meros lidos. Teste com 3.6, 4 e ' / '.
// Caso queira pode fazer uma fun��o imprimir os resultados das opera��es realizadas.
// DESAFIO: Teste com 7.8, 0.0 e ' / ' e corrija seu programa para imprimir uma mensagem caso n�o seja poss�vel efetuar um c�lculo.

/*
#include <stdio.h>

void imprimirResultado(float valor1, float valor2, char operador, float resultado) {
    printf("%.2f %c %.2f = %.2f\n", valor1, operador, valor2, resultado);
}

int main() {
    float valor1, valor2, resultado;
    char operador;

	printf("Digite um caracter: \n");
	scanf("%c", &operador);
	
	printf("Digite um valor: \n");
	scanf("%f", &valor1);
	
	printf("Digite um segundo valor: \n");
	scanf("%f", &valor2);


    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            imprimirResultado(valor1, valor2, operador, resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            imprimirResultado(valor1, valor2, operador, resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            imprimirResultado(valor1, valor2, operador, resultado);
            break;
        case '/':
            if (valor2 == 0) {
                printf("Nao foi poss�vel efetuar a operacao de divisao uma vez que o segundo valor e zero.\n");
            } else {
                resultado = valor1 / valor2;
                imprimirResultado(valor1, valor2, operador, resultado);
            }
            break;
        default:
            printf("Operacao invalida. Por favor, tente novamente.\n");
    }

    return 0;
}
*/

// 4 - 
/* 
Elabore uma fun��o que receba como par�metro a idade de uma pessoa (inteiro) e imprima:
 se idade < 13: �Crian�a�;
 se 13 = idade < 20: �Adolescente�;
 se 20 = idade < 65: �Adulto�; e,
 se idade = 65: �Idoso�.
Para fazer o programa, combine o uso de 3 pares de if-else.
Fa�a um programa que leia do teclado a idade da pessoa e imprima a mensagem. Teste com o valor 15 e com o valor 70.
*/

/*
# include <stdio.h>

void idade ()
{
	int idade; 
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("A idade da pessoa = %d anos", idade);
	
	if (idade >= 0 && idade <= 12) 
  	{
    	printf("A pessoa e uma crianca");
  	} 
  	else if (idade >= 13 && idade <= 19) 
 	{
    	printf("A pessoa e um adolescente");
  	} 
  	else if (idade >= 20 && idade <= 65) 
  	{
    	printf("A pessoa e um adulto");
  	}	 
  	else 
  	{
    	printf("A pessoa e uma idosa");
  	}
}

int main ()
{
	idade();
	return 0;
}
*/


// 5 - Escreva um programa que leia o c�digo de um determinado produto e mostre a sua classifica��o. Utilize a tabela abaixo como refer�ncia: 

/*
#include <stdio.h>

int main ()
{
	int cod;
	printf("Digite um codigo de 1 a 4: \n");
	scanf("%d", &cod);
	
	switch (cod){
		case 1: printf("Alimento nao-perecivel");
											break;
		case 2: printf("Alimento perec�iel");
											break;
		case 3: printf("Vestuario");
											break;		
		case 4: printf("Limpeza");
											break;	
		default: printf("Codigo Invalido");
											break;																														
	}
	
	return 0;
}
*/

// 6 - Elabore uma fun��o que recebe como par�metro um inteiro representando um dia da semana e imprime o seu respectivo nome por extenso. Considere que o n�mero 1 representa o domingo; 2, a segunda, etc.
// Caso o n�mero n�o corresponda a um dia da semana, a fun��o deve exibir a mensagem �Dia da semana inv�lido".
// Fa�a um programa para chamar a fun��o.
// Teste seu programa com um valor v�lido e outro inv�lido.

/*
#include <stdio.h>

int main ()
{
	int cod;
	printf("Sendo 1 = domingo e 7 = sabado\n");
	printf("Digite um numero de 1 a 7: ");
	scanf("%d", &cod);
	
	switch (cod){
		case 1: printf("Domingo");
											break;
		case 2: printf("Segunda");
											break;
		case 3: printf("Ter�a");
											break;		
		case 4: printf("Quarta");
											break;	
		case 5: printf("Quinta");
											break;	
		case 6: printf("Sexta");
											break;	
		case 7: printf("Sabado");
											break;																			
		default: printf("Codigo Invalido");
											break;																														
	}
	
	return 0;
}
*/

// 7 - Elaborar um programa para ler o c�digo de um produto e informar a sua origem:
// a) C�digo do produto entre 1 e 20: Europa
// b) C�digo do produto entre 21 e 40: �sia
// c) C�digo do produto entre 41 e 60: Am�rica
// d) C�digo do produto entre 61 e 80: �frica
// e) C�digo do produto maior que 80: Paraguai

/*
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
*/

// 8 - O dono de um supermercado quer modificar o c�lculo do pre�o final das mercadorias usando como base o seu valor de custo:
/*
� At� R$2,00, o acr�scimo deve ser um valor fixo de R$0,15;
� Entre R$2,00 e R$5,00, o acr�scimo deve ser proporcional, de 2%;
� Entre R$5,00 e R$20,00, deve ser proporcional, de 10%;
� Acima de R$20,00, o acr�scimo deve ser proporcional, de 8%.
Assim, um produto que custe R$ 28,00, ter� acr�scimo de R$ 2,35:
R$ 0,15 => referente aos primeiros R$ 2,00;
+ R$ 0,06 => referente aos 2% sobre a faixa R$ 2,00 a R$ 5,00 (R$ 3);
+ R$ 1,50 => referente aos 10% sobre a faixa R$ 5,00 a R$ 20,00 (R$ 15);
+ R$ 0,64 => referente aos 8% acima de R$ 20,00.
Fa�a um programa que leia o valor de custo do produto e imprima o seu pre�o final.
*/

/*
#include <stdio.h>

int main() {
	float custo, precoFinal;
	float newcusto1, acrescimo1, acrescimo2, acrescimo3, acrescimo4, acrescimoTotal;
	printf("Digite o valor de custo do produto: R$");
	scanf("%f", &custo);
  
  if (custo >= 20.0) {
  	newcusto1 = custo - 20 ;
  	acrescimo1 = newcusto1 * 1.08 - newcusto1 ;
  	acrescimo2 = 15*1.10 - 15; 
  	acrescimo3 = 3*1.02 - 3 ;
  	acrescimo4 = 0.15 ;
  	acrescimoTotal = acrescimo1 + acrescimo2 + acrescimo3 + acrescimo4;
    precoFinal = custo + acrescimoTotal;
    printf("O acrescimo foi = R$%.2f\n", acrescimoTotal);
  	} 
	else if (custo > 5.0 && custo <= 20.0) {
	newcusto1 = custo - 5 ;
  	acrescimo1 = newcusto1 * 1.10 - newcusto1; 
  	acrescimo2 = 3*1.02 - 3 ;
  	acrescimo3 = 0.15 ;
  	acrescimoTotal = acrescimo1 + acrescimo2 + acrescimo3;
    precoFinal = custo + acrescimoTotal;
    
    printf("O acrescimo foi = R$%.2f\n", acrescimoTotal);
	}
	else if (custo > 2.0 && custo <= 5.0) {
    newcusto1 = custo - 2 ;
  	acrescimo1 = newcusto1 * 1.02 ;
  	acrescimo2 = 0.15 ;
  	acrescimoTotal = acrescimo1 + acrescimo2;
    precoFinal = custo + acrescimoTotal;
    
    printf("O acrescimo foi = R$%.2f\n", acrescimoTotal);
  	} 
  	else {
    precoFinal = custo + 0.15;
    printf("O acrescimo foi = 0.15\n");
  	}
  
  	printf("O preco final do produto = R$%.2f\n", precoFinal);
  	
  	return 0;
}
*/


