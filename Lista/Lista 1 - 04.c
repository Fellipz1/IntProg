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


// Abaixo segue o teste de mesa
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
