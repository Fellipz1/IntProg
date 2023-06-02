// 8- Faça um programa que leia um inteiro positivo 
// x e imprima todas as potências de 2 no intervalo 
// entre 0 e x. Use uma variável acumuladora para 
// calcular a potência de 2.
// Teste seu programa com o valor: 21

#include <stdio.h>
#include <math.h>

void potenciasDe2 ()
{
	int x;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    
    printf("Potencias de 2 de 0 ate %d:\n", x);
    if(x<0 || x==0)
	{
		printf("Valor invalido, por favor, digite um valor valido.\n");
	}
	else 
	{
    	int i;
    	for (i = 0; i <= x; i++) {
	        int potencia = pow(2, i);
	        printf("O valor da potencia de 2 elevado %d = %d\n", i, potencia);
    	}
	}
}
int main() {
    potenciasDe2 ();
    return 0;
}
