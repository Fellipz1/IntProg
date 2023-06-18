// 4 - Escreva um algoritmo que imprima todos os números de 1000 a 1999 que divididos por 11 dão resto igual a 5.

#include <stdio.h>

int main() {
    printf("Numeros de 1000 a 1999 que divididos por 11 têm resto igual a 5:\n");
    int i;
    for (i = 1000; i <= 1999; i++) {
        if (i % 11 == 5) {
            printf("%d,", i);
        }
    }
    
    return 0;
}
