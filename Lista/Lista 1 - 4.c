// 4 - Calcule o sal�rio l�quido do funcion�rio sabendo que este � constitu�do pelo sal�rio bruto mais o valor das horas extras subtraindo 8% de INSS do total. Ser�o lidos nesse problema o sal�rio bruto, o valor das horas extras e o n�mero de horas extras. Apresentar ao final o sal�rio l�quido.
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

    sl = sb + vthe - inss; // calcila o sal�rio bruto

    printf("O salario liquido do funcionario e: R$ %.2f\n", sl);

    return 0;
}
*/

// Abaixo segue o teste de mesa
/*

*/
