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
/*

*/
