// Aluno: Fellipe de Sá Moraes
// Lista 1
// Inicio: 16/04/2023
// Feito da 1 a 8 no dia 16/04

// 1 - Faça uma função que retorne a soma de dois números reais passados como parâmetro.
/*
#include <stdio.h>

float soma(float a, float b)
{
	float soma = a + b; 
    return soma;
}
    
int main() 
{
    float a, b;
    float valor; 
    
    printf("Digite dois valores pertencentes ao campos dos reais\n");

	printf("Valor 1:\n");
    scanf("%f", &a);

	printf("Valor 2:\n");
    scanf("%f", &b);
        
    valor = soma (a, b);

    printf("A soma de %.2f + %.2f dos dois valores digitados = %.2f\n", a, b, valor);

    return 0;
}

*/
// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Nesse exemplo digitamos a=5 e b=4
/*
		main 	calculo
Linha 	a 	b	soma
9		?	?	?
11		?	?	?
12		?	?	?
14		?	?	?	Imprime: Digite dois valores pertencentes ao campo dos reais
16		?	?	?	Imprime: Digite o valor 1
17		5	?	?
19		5	?	?	Imprime: Digite o valor 2
20		5	4	?	
22		5	4	?
3		5	4	?
5		5	4	9
6		?	?	9	
24		?	?	9	Imprime: A soma de a + b dos dois valores digitados = 9
*/

// 2 - Crie uma função que calcule o aumento que será dado a um funcionário. Esta função receberá como parâmetro o salário atual do funcionário e a porcentagem de aumento. A função deverá, ao final, imprimir o novo valor do salário e o valor do aumento.
/*
#include <stdio.h>

void questao2(float salario, float percentual_aumento) 
{
    float ns = salario * (1 + percentual_aumento/100); //ns=novo salario; 
    float va = ns - salario; //va=valor do aumento

    printf("Novo salario: R$ %.2f\n", ns);
    printf("Valor do aumento: R$ %.2f\n", va);
}

int main() 
{
    float salario, aumento;

    printf("Digite o atual salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &aumento);

    questao2(salario, aumento);

    return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Nesse exemplo digitamos salario = 2000 e aumento = 10
/*
		main 					calculo
Linha 	salario 	aumento		ns			va
14		?			?			?			?
16		?			?			?			?
18		?			?			?			?
19		2000.00		?			?			?
21		2000.00		?			?			?
22		2000.00		10.00		?			?
24		2000.00		10.00		?			?
5		2000.00		10.00		?			?
7		2000.00		10.00		2200.00		?
8		2000.00		10.00		2200.00		200.00
10		2000.00		10.00		2200.00		200.00
11		2000.00		10.00		2200.00		200.00
26	
*/

// 3 - Faça uma função que converta uma quantidade de horas digitadas pelo usuário em minutos e retorne esta quantidade. Faça a leitura da quantidade de horas na função principal.
/*
#include <stdio.h>

void converterHoraemMin (float h)
{
    float min = h * 60; //min=minutos; h=horas
    
    printf("Quantidade de horas: %.0f\n", h);
    printf("Quantidade em minutos: %.0f\n", min);
}

int main() 
{
	float horas;
	
	printf("Digite a quantidade de horas: \n");
	scanf("%f", &horas);
	
	converterHoraemMin (horas);
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Nesse exemplo usamos 7 horas
/*
		main 		calculo
Linha 	horas 		min			
11		?			?			
13		?			?			
15		?			?			Imprime: Digite a quantidade de horas:
16		7			?		
18		7			?			
03		7			?
05		7			420
07		7			420			Imprime: Quantidade de horas: 7
08		7			420			Imprime: Quantidade em minutos: 420
19	
*/

// 4 - Calcule o salário líquido do funcionário sabendo que este é constituído pelo salário bruto mais o valor das horas extras subtraindo 8% de INSS do total. Serão lidos nesse problema o salário bruto, o valor das horas extras e o número de horas extras. Apresentar ao final o salário líquido.

/*
#include <stdio.h>

int main() 
{
    float sb, vhe, sl; // sb=salario bruto; vhe=valor das horas extras; sl=salario liquido
    int nhe; //nhe=numero de horas extras

    printf("Digite o salario bruto do funcionario: ");
    scanf("%f", &sb);

    printf("Digite o valor das horas extras: ");
    scanf("%f", &vhe);

    printf("Digite o numero de horas extras: ");
    scanf("%d", &nhe);

    float vthe = vhe * nhe; //vthe=valor total de horas extras, calcula o valor total das horas extras

    float inss = (sb + vthe) * 0.08; //calcula o valor do desconto do INSS

    sl = sb + vthe - inss; // calcila o salário bruto

    printf("O salario liquido do funcionario e: R$ %.2f\n", sl);

    return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Nesse exemplo usamos sb=1000, vhe=25, nhe=40
/*
						main 		
Linha 	sb			vhe		nhe		sl				
03		?			?		?		?		
05		?			?		?		?		
06		?			?		?		?		
08		?			?		?		?		Imprime: Digite o salario bruto do funcionario: 
09		1000		?		?		?		
11		1000		?		?		?		Imprime: Digite o valor das horas extras:
12		1000		25		?		?		
14		1000		25		?		?		Imprime: Digite o numero de horas extras:
15		1000		25		40		?		
17		1000		25		40		?		
19		1000		25		40		?		
21		1000		25		40		1840	
23		1000		25		40		1840	Imprime: O salario liquido do funcionario e: R$ 1840.00
25			
*/

// 5 - Faça uma função que receba a quantidade de quilowatts consumido em uma casa e calcule o valor a ser pago de energia elétrica, sabendo-se que o valor a pagar por quilowatt é de R$ 0,46. Apresentar o valor total a ser pago pelo usuário acrescido de 18% de ICMS.
/*
#include <stdio.h>

float questao5(float qdq)
{
    float vQ = 0.46; //vQ=valor de Quilowatt
    float vT = qdq * vQ; //vT=valor Total; qdq= quantidade de quilowatts
    float icms = vT * 0.18; //icms=imposto
    float vF = vT + icms; // vF=valor final
    return vF;
}

int main() 
{
    float qdq;

    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%f", &qdq);

    float vF = questao5(qdq);

    printf("Valor a ser pago: R$ %.2f\n", vF);

    return 0;
}
*/

// Abaixo segue o teste de mesa
// Valores usados qdq=100
// O teste de mesa foi realizado no código com o #include sendo a linha 1
/*		

12		?			0.46	?		?		?
14		?			0.46	?		?		?
16		?			0.46	?		?		?			Imprime: Digite a quantidqade de quilowatts consumida:
17		100			0.46	?		?		?			
19		100			0.46	?		?		?			
3		100			0.46	?		?		?			
5		100			0.46	?		?		?			
6		100			0.46	46.00	?		?			
7		100			0.46	46.00	8.28	?			
8		100			0.46	46.00	8.28	54.28		
9		100			0.46	46.00	8.28	54.28		
21		100			0.46	46.00	8.28	54.28		Imprime: Valor a ser pago: R$ 54.28
23		
*/

// 6 - Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a quantidade de quilômetros rodados e a quantidade de combustível consumido.
/*
#include <stdio.h>

float mediaDeCombustivel(float qQR, float qCG) //qQR=quantidade de quilometros rodados; qC=quantidade de combustivel gasto
{
	float mediaCG = qQR/qCG; //mediaCC=media de combustivel gasto
	return mediaCG;
}
int main ()
{
	float qQR, qCG;
	
	printf("Digite a quantidade de quilometros rodados:\n ");
    scanf("%f", &qQR);
    
    printf("Digite a quantidade de combustiveis gasto:\n ");
    scanf("%f", &qCG);
    
    float mediaCG = mediaDeCombustivel(qQR, qCG);
    
    printf ("Media de combustivel: %.2f km/l", mediaCG);
    
    return 0;	
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
/*

*/

// 7 - Faça uma função que receba como parâmetro uma nota de uma aluno e, se o valor for maior ou igual a 70, imprimir na tela "APROVADO", se for menor, imprimir "REPROVADO". Testar ainda se o valor lido foi maior do que 100 ou menor do que zero. Neste caso, imprimir "NOTA INVÁLIDA".
/*
#include <stdio.h>

void verificacaoNota(float nota)
{
    if (nota < 0 || nota > 100) 
	{
        printf("Nota Invalida\n");
    } 
	else if (nota >= 70) 
	{
        printf("Aprovado\n");
    } 
	else 
	{
        printf("Reprovado\n");
    }
}

int main() 
{
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    verificacaoNota(nota);

    return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer o teste com 80 e outro com 60 e um com 110
/*
// Teste 1
		main		void
Linha 	nota		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite a nota do aluno:  
24		80			?
26		80			?		
3		80			?			
5		80			F	
7		80			F
9		80			V
11		80			V			Imprime: Aprovado
13		80					
15		80			
28		

// Teste 2
		main		void
Linha 	nota		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite a nota do aluno:  
24		60			?
26		60			?		
3		60			?			
5		60			F	
7		60			F
9		60			F
11		60			F			
13		60			V		
15		60			V			Imprime: Reprovado
28

// Teste 3
		main		void
Linha 	nota		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite a nota do aluno:  
24		110			?
26		110			?		
3		110			?			
5		110			V	
7		110			V			Imprime: Nota Invalida
9		110			
11		110						
13		110					
15		110			
28
*/

// 8 - Faça uma função que receba um número inteiro e imprima o número lido é par ou impar.
/*
#include <stdio.h>

void questao8(int numero)
{
    if (numero % 2 == 0) 
	{
        printf("O numero %d = par\n", numero);
    } 
	else 
	{
        printf("O numero %d = impar\n", numero);
    }
}

int main() 
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    questao8(numero);

    return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer um teste com 4 e outro com 5
/*
// Teste 1
		main		void
Linha 	numero		condição
15		?			?	
17		?			?
19		?			?			Imprime: Digite um numero inteiro:  
20		4			?
22		4			?		
3		4			?			
5		4			V	
7		4			V			Imprime: O numero 4 = par 
9		4			
11		4												
24		

// Teste 2
		main		void
Linha 	nota		condição
15		?			?	
17		?			?
19		?			?			Imprime: Digite um numero inteiro:  
20		5			?
22		5			?		
3		5			?			
5		5			F	
7		5			F			
9		5			V
11		5			V			Imprime: O numero 5 = impar									
24

*/

// 9 - Faça uma função que receba um número inteiro e teste se o valor lido termina com 0 (divisível por 10). Em caso positivo, exiba a metade deste número. Caso contrário, exibir a mensagem "O número digitado não termina com 0".
/*
#include <stdio.h>

void vdp10(int num) //vdp10 = verificando divisibilidade por 10
{
  if (num % 10 == 0) 
  {
    int metade = num / 2;
    printf("Como o numero foi divido por \n10 sem deixar resto, \nsua metade = %d\n", metade);
  } else 
  {
    printf("O numero digitado nao termina com 0\n");
  }
}

int main() 
{
  int num;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  vdp10(num);

  return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer um teste com 4 e outro com 50
/*
// Teste 1
		main		void
Linha 	num	 		metade		condição
15		?			?			?	
17		?			?			?
19		?			?			?			Imprime: Digite um numero inteiro:  
20		4			?			?
22		4			?			?		
3		4			?			?			
5		4			?			F
6		4			?			F				
7		4			?			F			 
9		4			?			V
11		4			?			V			Imprime: O numero digitado nao termina com zero									
24		

// Teste 2
		main		void
Linha 	nota		metade		condição
15		?			?			?	
17		?			?			?
19		?			?			?			Imprime: Digite um numero inteiro:  
20		50			?			?
22		50			?			?		
3		50			?			?			
5		50			?			V
6		50			25			V			
7		50			25			V 			Imprime: Como o numero foi dividido por 10 sem deixar resto, sua metade = 25
9		50			25	
11		50			25											
24

*/

// 10 - Faça uma função que imprima se um número real recebido como parâmetro é positivo, negativo ou neutro (zero).
/*
#include <stdio.h>

void pnz(float num) //pnz= positivo, negativo ou zero
 {
  if (num > 0) 
  {
    printf("O numero e positivo\n");
  } 
  else if (num < 0)
  {
    printf("O numero e negativo\n");
  } 
  else 
  {
    printf("O numero e zero\n");
  }
}

int main() 
{
  float num;
  printf("Digite um numero real: ");
  scanf("%f", &num);

  pnz(num);

  return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Vou fazer um teste com 4 e outro com -4 e outro com 0
/*
// Teste 1
		main		void
Linha 	numero		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite um numero real:  
24		4			?
26		4			?		
3		4			?			
5		4			V	
7		4			V			Imprime: O numero e positivo 
28	

// Teste 2
		main		void
Linha 	numero		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite um numero real:  
24		-4			?
26		-4			?		
3		-4			?			
5		-4			F	
7		-4			F			
9		-4			V
11		-4			V			Imprime: O numero e negativo									
28	

// Teste 3
Linha 	numero		condição
19		?			?	
21		?			?
23		?			?			Imprime: Digite um numero real:  
24		0			?
26		0			?		
3		0			?			
5		0			F	
7		0			F			
9		0			F
11		0			F									
13		0			V
15		0			V			Imprime: O numero e zero
28
*/

// 11 - Faça a leitura do salário atual e do tempo de serviço de um funcionário. A seguir, em uma função, calcule o seu salário reajustado. Funcionários com até 1 ano de empresa, receberão aumento de 10%. Funcionários com mais de um ano de tempo de serviço, receberão aumento de 20%. A função deverá retornar o salário reajustado.
/*
#include <stdio.h>

float sr(float sa, int ts) //sr=salario reajustado; sa=salario atual; ts= tempo de serviço; sn=salario novo
{
  if (ts <= 1) 
  {
    return sa * 1.1;
  } 
  else 
  {
    return sa * 1.2;
  }
}

int main() {
	
  float sa, sn;
  int ts;

  printf("Digite o salario atual do funcionario: R$");
  scanf("%f", &sa);

  printf("Digite em anos o tempo de servico do funcionario: ");
  scanf("%d", &ts);

  sn = sr(sa, ts);

  printf("O salario com reajuste para esse funcionario = R$%.2f\n", sn);

  return 0;
}
*/

// Abaixo segue o teste de mesa
// O teste de mesa foi realizado no código com o #include sendo a linha 1
// Temos um teste com sa= 2000 e depois fiz duas variações uma com tempo de serviço de 1 e outra com 2 anos 
/*
// Teste 1
		main			void
Linha 	sa		ts		sn		condição
15		?		?		?			?	
17		?		?		?			?
18 		?		?		?			?
20		?		?		?			?		Imprime: Digite o salario atual do funcionario: R$
21		2000	?		?			?
23		2000	?		?			?		Imprime: Digite em anos o tempo de servico do funcionario
24		2000	1		?			?	
26		2000	1		?			?		
3		2000	1		?			?			
5		2000	1		?			V				
7		2000	1		2200		V					 											
28		2000	1		2200		V		Imprime: O salario com reajuste para esse funcionario = R$2200.00
30					

// Teste 2
		main			void
Linha 	sa		ts		sn		condição
15		?		?		?			?	
17		?		?		?			?
18 		?		?		?			?
20		?		?		?			?		Imprime: Digite o salario atual do funcionario: R$
21		2000	?		?			?
23		2000	?		?			?		Imprime: Digite em anos o tempo de servico do funcionario
24		2000	2		?			?	
26		2000	2		?			?		
3		2000	2		?			?			
5		2000	2		?			F				
7		2000	2		?			F					 
9		2000	2		2400		V
11		2000	2		2400		V												
28		2000	2		2400		V		Imprime: O salario com reajuste para esse funcionario = R$2400.00
30					

*/

// 12 - Faça uma função que receba o ano atual e o ano de nascimento de uma pessoa e imprima sua idade. A seguir, imprima se a pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 50 anos) ou idosa (51 anos em diante).
/*
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
*/
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

// 13 - Faça um algoritmo que receba o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o algoritmo deverá escrever "Financiamento Concedido"; senão, ele deverá escrever "Financiamento Negado".
/*
#include <stdio.h>

void financiamentoAorNA()
{
	float salario, financiamento;
	
	printf ("Digite o seu salario: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor do seu financiamento: \n");
	scanf ("%f", &financiamento);
	
	if(	(5*salario) >= financiamento){
		printf ("Financiamento Concedido");
	}
	else{
		printf ("Financiamento Negado");
	}
}

int main ()
{
	financiamentoAorNA();
	return 0;
}
*/

// 14 - A taxa de juros aplicada em fundos depositados em um banco é determinada pelo tempo em que estes ficam depositados. Para um banco em particular, a seguinte tabela é usada:
/*
Tempo em depósito 											Taxa de juro 
Maior ou igual a 5 anos										0,95 
Menor que 5 anos mas maior ou igual a 4 anos  				0,9 
Menor que 4 anos mas maior ou igual a 3 anos 				0,85 
Menor que 3 anos mas maior ou igual a 2 anos 				0,75 
Menor que 2 anos mas maior ou igual a 1 ano 				0,65 
Menor que 1 ano 											0,55 
Usando esta informação, escreva uma função que receba o tempo em que os fundos foram mantidos em depósito e retorne a taxa de juros correspondente.
*/
//Resposta
/*
#include <stdio.h>

void taxadejuros()
{
	float tempo, valor, valoratual, taxa;
	
	printf ("Digite o tempo que seu dinheiro esta no banco: \n");
	scanf("%f", &tempo);
	
	printf("Digite o valor do seu deposito: \n");
	scanf ("%f", &valor);
	
	if(	tempo >= 5 ){
		taxa = 0.95;
		valoratual = (taxa*valor)+valor;
		printf ("O seu saldo = %.2f",valoratual);
	}
	else{
		if (tempo <5 && tempo>=4){
			taxa = 0.9;
			valoratual = (taxa*valor)+valor;
			printf ("O seu saldo = %f",valoratual);
			}
		else{
			if (tempo <4 && tempo>=3){
				taxa = 0.85;
				valoratual = (taxa*valor)+valor;
				printf ("O seu saldo = %f",valoratual);
			}
			else{
				if (tempo <3 && tempo>=2){
					taxa = 0.75;
					valoratual = (taxa*valor)+valor;
					printf ("O seu saldo = %f",valoratual);
				}
				else{
					if(tempo<2 && tempo >=1){
						taxa = 0,65;
						valoratual = (taxa*valor)+valor;
						printf ("O seu saldo = %f",valoratual);
					}
					else{
						if (tempo<1){
							taxa = 0,55;
							valoratual = (taxa*valor)+valor;
							printf ("O seu saldo = %f",valoratual);
						}
					}
				}
			}
	}	}
}

int main ()
{
	taxadejuros();
	return 0;
}
*/

// 15 - Desenvolva um algoritmo que leia duas notas de prova e uma de trabalho (todos os valores entre 0 e 10) de um aluno e sua frequência, definindo e imprimindo se ele foi aprovado, reprovado ou se fará prova final. O aluno será reprovado se faltou mais de 15 aulas. Será aprovado se não for reprovado por falta e sua média for maior que 7,0. Caso tenha média menor, deverá fazer prova final. O cálculo da média deve ser feito com peso 3 para a primeira prova, 5 para a segunda prova e 2 para o trabalho.
/*
#include <stdio.h>

void calculoMedeRepPorFaltas()
{
	float nota1, nota2, notaTrab, faltas, med;
	
	printf ("Digite o numero de faltas: \n");
	scanf ("%f",&faltas);
	
	printf ("Digite a nota da prova 1: \n");
	scanf ("%f",&nota1);
	
	printf ("Digite a nota da prova 2: \n");
	scanf ("%f",&nota2);
	
	printf ("Digite a nota do trabalho: \n");
	scanf ("%f",&notaTrab);

	if(	faltas <= 15 ){
		med = (nota1*3)+(nota2*5)+(notaTrab*2); 
		med = med/10;
		if ( med>=7){
			printf ("Aprovado por nota\n");
		}else if(med<7 && med>=4){
			printf("Voce esta de prova final\n");
		}
			else {
				printf ("Voce esta reprovado por nota\n");
			}
		}	
		else{
			printf ("Reprovado por faltas");
		}		
	printf ("Sua media = %f", med);
}

int main ()
{
	calculoMedeRepPorFaltas();
	return 0;
}
*/

// 16 - Desenvolva um programa que pergunte um código e de acordo com o valor digitado seja apresentado o cargo correspondente (utilize múltipla escolha (switch)). Caso o usuário digite um código que não esteja na tabela, mostrar uma mensagem de código inválido. Utilize a tabela abaixo:
/*
Código Cargo 
101 Vendedor 
102 Atendente 
103 Auxiliar
Técnico 
Lista nº 01 3
104 Assistente 
105 Coordenador
de Grupo 
106 Gerente
*/
// Resposta
/*
#include <stdio.h>

int main(){
	
	int cod;
	printf ("Digite o codigo: ");
	scanf("%d", &cod);
	
	switch(cod){
		case 101: printf("Vendedor");
					break;
		case 102: printf("Atendente");
					break;
		case 103: printf("Auxiliar Tecnico");
					break;
		case 104: printf("Assistente");
					break;
		case 105: printf("Coordenador de Grupo");
					break;
		case 106: printf("Gerente");
					break;
		default: printf("Numero Invalido");
				break;
	}
	
	return 0;
}
*/

// 17 - Escreva uma função que receba dois números reais e um código de seleção do usuário. Se o código digitado for 1, faça o programa adicionar os dois números previamente digitados e imprimir o resultado; se o código de seleção for 2, os números devem ser multiplicados; se o código de seleção for 3, o primeiro número deve ser dividido pelo segundo. Se nenhuma das opções acima for escolhida, mostrar "Código inválido". Utilize múltipla escolha para resolver esta questão.
/*
#include <stdio.h>

void operacao(float num1, float num2, int codigo) 
{
    switch (codigo) 
	{
        case 1:
            printf("Soma: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Multiplicacao: %.2f\n", num1 * num2);
            break;
        case 3:
            if (num2 != 0) {
                printf("Divisao: %.2f\n", num1 / num2);
            } else {
                printf("Divisao por zero nao pode ser executada.\n");
            }
            break;
        default:
            printf("Codigo invalido.\n");
    }
}

int main() 
{
    float num1, num2;
    int codigo;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    
    printf("Digite a operacao desejada:\n");
    printf("1 - Soma\n2 - Multiplicacao\n3 - Divisao\n");
    scanf("%d", &codigo);
    
    operacao(num1, num2, codigo);
    
    return 0;
}
*/

// 18 - Elabore uma função que calcule o índice de massa corporal (IMC) de uma pessoa recebendo a altura e o peso. Para isso, peça ao usuário para digitar seu peso (em Kg) e sua altura (em m), calcule o valor do seu IMC e imprima-o. O IMC é determinado pela divisão do peso da pessoa pelo quadrado de sua altura. Com peso de 61.5 Kg e altura de 1.70 m, o programa deve exibir:
/*
#include <stdio.h>
#include <math.h>

void imc(float peso, float altura) {
    float imc = peso / pow(altura, 2);
    printf("Seu IMC = %.2f\n", imc);
}

int main() {
    float peso, altura;
    
    printf ("INDICE DE MASSA CORPORAL \n");
    
    printf("Digite o seu peso (em Kg): ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura (em m): ");
    scanf("%f", &altura);
    
    imc(peso, altura);
    
    return 0;
}
*/

// 19 - Elabore um programa que imprima o extrato de uma conta salário que permite até 3 retiradas por mês. Leia o valor do saldo inicial, o valor do salário e o valor de cada retirada, imprimindo saldos parciais e final. Ao ser executado, o programa deve exibir:
/*
#include <stdio.h>
// si=salario inicial, s=salario, r1=retirada 1, r2= retirada 2, r3= retrirada3, sp1=saldo parcial 1, sp2= saldo parcial 2, sf= saldo final
int main() {
    float si, s, r1, r2, r3;
    float sp0, sp1, sp2, sf;
    
    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &si);
    
    printf("Digite o valor do salario: ");
    scanf("%f", &s);
    
    printf("Digite o valor da primeira retirada: ");
    scanf("%f", &r1);
    
    printf("Digite o valor da segunda retirada: ");
    scanf("%f", &r2);
    
    printf("Digite o valor da terceira retirada: ");
    scanf("%f", &r3);
    
    sp0 = si + s;
    sp1 = si - r1 + s;
    sp2 = sp1 - r2;
    sf = sp2 - r3;
    
    printf("EXTRATO BANCARIO \n");
    printf("Saldo inicial: R$%.2f\n", si);
    printf("Salario: R$%.2f\n",s);
    printf("Saldo antes da primeira retirada: R$%.2f\n",sp0);
    printf("Saldo apos a primeira retirada: R$%.2f\n", sp1);
    printf("Saldo apos a segunda retirada: R$%.2f\n", sp2);
    printf("Saldo final: R$%.2f\n", sf);
    
    return 0;
}
*/

