// 5 - Faça uma função que receba a quantidade de quilowatts consumido em uma casa e calcule o valor a ser pago de energia elétrica, sabendo-se que o valor a pagar por quilowatt é de R$ 0,46. Apresentar o valor total a ser pago pelo usuário acrescido de 18% de ICMS.

#include <stdio.h>

float questao5(float qdq)
{
    float vQ = 0.46; //vQ=valor de Quilowatt
    float vT = qdq * vQ; //vT=valor Total; quq= quantidade de quilowatts
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


// Abaixo segue o teste de mesa
// Valores usados qdq=100
// O teste de mesa foi realizado no código com o #include sendo a linha 1
/*		
		main		Calculo
Linha 	qdq			vQ		vT		icms	vF
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
