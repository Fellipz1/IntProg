// 3

#include <stdio.h>

float fatorial(int n) {
    int valor_final = n;

    for (int i = 1; i < n; i++) 
	{
        valor_final = (valor_final * (n - i));
    }
    
    return valor_final;
}

int main() {
    int n, fat;
    printf("Digite um valor para obter o seu fatorial: \n");
    scanf("%d", &n);
    fat = fatorial(n);
    printf("O valor do seu %d fatorial = %d\n", n, fat);
    
    return 0;
}
