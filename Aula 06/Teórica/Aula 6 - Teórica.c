// Fellipe de S� Moraes
//25/04/2023

// 2 - 2) Fa�a um programa para calcular a �rea de um c�rculo. 
// A �rea de um c�rculo � dada pela seguinte f�rmula a = pr2.
// O valor do raio r ser� digitado pelo usu�rio.
//Verifique se o raio � positivo antes de efetuar c�lculo, caso contr�rio imprima uma mensagem de erro ao usu�rio.

/*
#include <stdio.h>
//nesse c�digo utilizaremos a = �rea e r = raio
void calculandoAreaDoCirculo() 
{
    float r, a=0; 
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    if (r>=0){
    a = 3.14159*r*r; 
    printf("Area do circulo = %f\n", a);
    }
    else {
        if(r<0);
        printf ("O raio digitado foi considerado invalido");
        }
}

int main() {
    calculandoAreaDoCirculo (); 
    return 0;
}
*/

// 3) Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio considerar o m�s em que ela nasceu).

/*
#include <stdio.h>

void idade() 
{
     int an;
  
    printf("Digite o ano do seu nascimento: \n");
    scanf("%d", &an);
	int idade = 2023 - an;

	if (idade>=16){
		printf("Voce pode votar esse ano \n");
	}
  		else {
    	printf("Voce nao pode votar esse ano \n");
  	}
}

int main() 
{
  idade();
  return 0;
}
*/

// 4) Fa�a uma fun��o que receba como par�metro um n�mero inteiro e imprima se este n�mero � par ou �mpar.
// Em seguida, fa�a um programa que leia um n�mero inteiro do teclado e chame a fun��o.
// Fa�a um teste de mesa com o valor 4 e outro com o valor 5.

/*
#include <stdio.h>

void verificacaoParOuImpar(int numero){
  
    if (numero % 2 == 0) 
	{
        printf("O numero %d = par", numero);
    } 
	else 
	{
        printf("O numero %d = impar", numero);
    }
}

int main() 
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    verificacaoParOuImpar(numero);

    return 0;
}
*/

/*
// Teste de mesa para 4

		main 		void
Linha 	num 		condi��o			
15		?			?			
17		?			?			
19		?			?			Imprime: Digite um numero inteiro:
20		4			?		
22		4			?			
03		4			?
05		4			V
07		4			V			Imprime: O numero 4 = par
24

// Teste de mesa para 5
		main 		void
Linha 	num 		condi��o			
15		?			?			
17		?			?			
19		?			?			Imprime: Digite um numero inteiro:
20		5			?		
22		5			?			
03		5			?
05		5			F
07		5			F			
09		5			V			
11		5			V			Imprime: O numero 5 = impar
24
*/

// 5) As ma��s custam R$ 0,30 cada se forem compradas menos do que uma d�zia, e R$ 0,25 se forem compradas pelo menos doze.
// Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o valor total da compra.

/*
#include <stdio.h>

void macas() 
{
    int macas;
    float custo, preco;
  
    printf("Digite quantas macas voce quer comprar: \n");
    scanf("%d", &macas);
	
	if (macas>=12){
		custo = 0.25;
		preco = macas *0.25;
		printf("Voce esta levando %d macas, custando R$: %.2f\n", macas, preco);
	}
  		else {
		custo = 0.3;
		preco = macas *0.3;
		printf("Voce esta levando %d macas, custando R$: %.2f\n", macas, preco);
  	}
}

int main() 
{
  macas();
  return 0;
}
*/

