// 3

#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;
    
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    return fatorial;
}

int main() {
    int numero;
    int resultado;
    
    printf("Digite um valor para obter o seu fatorial: \n");
	scanf("%d",&numero);
	
    resultado = calcularFatorial(numero);
    
    printf("O fatorial de %d =: %d\n", numero, resultado);
    
    return 0;
}
