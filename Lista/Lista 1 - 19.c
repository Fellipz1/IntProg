// 19 - Elabore um programa que imprima o extrato de uma conta salário que permite até 3 retiradas por mês. Leia o valor do saldo inicial, o valor do salário e o valor de cada retirada, imprimindo saldos parciais e final. Ao ser executado, o programa deve exibir:

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
