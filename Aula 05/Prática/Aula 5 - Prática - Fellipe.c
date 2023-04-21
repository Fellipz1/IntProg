// 4- 
/*
#include <stdio.h>

float valorparcelamento (float valor , float parcelas, float parcelamento) {
	
	parcelamento = valor / parcelas ;
	return parcelamento;
}
int main(){
	float valor, parcelas, compra, parcelamento;
	printf ("Digite o valor:\n");
	scanf ("%f", &valor);
	printf ("Digite a quantidade de parcelas:\n");
	scanf ("%f", &parcelas);
	compra = valorparcelamento (valor, parcelas, parcelamento);
	printf ("O valor da compra a prazo\n");
	printf ("Quantidade de parcelas: %.0f\n", parcelas);
	printf ("Valor da parcela a prazo: %.2f\n", compra);
	return 0;
}
*/

// 5 - 
/*
#include <stdio.h>

void tempo (int s){
	int m, h;
	int s2;
	h = s/3600;
	m = s/60 %60;
	s2 = s %60;
	printf ("%d horas, ", h);
	printf("%d minutos e ", m);
	printf ("%d segundos", s2);	
}
int main (){
	int seg;
	printf("Digite a quantidade em segundos: \n");
	scanf ("%d", &seg);
	tempo (seg);
	return 0;

}
*/

// 6 - a
// media = (p1+p2+2*p3)/4
/*
#include <stdio.h>

void nota3min (float nota1, float nota2, float med){
	float nota3;
	nota3 = (med*4-nota1-nota2)/2;
	printf ("Sua nota minima na terceira prova para ser aprovado = %.2f", nota3);
}
int main (){
	float nota1; 
	float nota2;
	float med=5;
	printf ("Digite a nota da sua primeira prova: \n");
	scanf ("%f", &nota1);
	printf ("Digite a nota da sua segunda prova: \n");
	scanf ("%f", &nota2);

	nota3min (nota1, nota2, med);
	
	return 0;
}
*/

// 7 -
/*
#include <stdio.h>

void num7(int num1, int num2) 
{
    int soma = num1 + num2;
    int diferenca = num1 - num2;
    int produto = num1 * num2;
    int quociente = num1 / num2;
    int resto = num1 % num2;

    printf("Soma:%d + %d = %d\n", num1, num2, soma);
    printf("Diferenca: %d - %d = %d\n", num1, num2, diferenca);
    printf("Produto: %d * %d = %d\n", num1, num2, produto);
    printf("Quociente: %d / %d = %d\n", num1, num2, quociente);
    printf("Resto: %d %% %d = %d\n", num1, num2, resto);
}

int main() 
{
    int num1, num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);

    printf("Digite um segundo valor: ");
    scanf("%d", &num2);

    num7(num1, num2);

    return 0;
}
*/

// 8 -
/*
#include <stdio.h>

void num8 (float m){
	float decimetros = 10 * m;
	float centimetros = 100 * m;
	float milimetros = 1000 * m;
	printf ("Decimetros = %.2f dm\n", decimetros);
	printf ("Centimetros = %.2f cm\n", centimetros);
	printf ("Milimetros = %.2f mm\n", milimetros);
	}

int main (){
	float m;
	printf ("Digite o valor em  metros: \n");
	scanf ("%f", &m);
	num8 (m);
	return 0;
}
*/
	
