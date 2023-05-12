// c) Reescreva o programa para que ele imprima a tabuada de todo valor inteiro que o usu�rio digitar. O programa dever� ser encerrado quando o usu�rio digitar o valor zero.

#include <stdio.h>

void tabuada(int n) {
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);	
	    
    while (valor!=0) {
    	tabuada(valor);
        printf("Digite um valor inteiro (ou 0 para sair): ");
        scanf("%d", &valor);
    }
    return 0;
}
