// 16) Um dos sistemas de encriptação mais antigos é atribuído a Júlio César: se uma letra a ser criptografada é a letra de número N do alfabeto, substitua-a com a 
// letra (N+K), onde K é um número inteiro constante (César utilizava K = 3).
// Dessa forma, para K = 1 a mensagem
// “Adoro programar em C”
//		se torna
// “Bepsp!qsphsbnbs!fn!D”.
// Faça um programa que receba como entrada uma mensagem e um valor de K e altere a mensagem criptografando-a pelo código de César.

#include <stdio.h>

void criptografarCesar(char mensagem[], int k) {
    int i;

    for (i = 0; mensagem[i] != '\0'; i++) {
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = ((mensagem[i] - 'A' + k) % 26) + 'A';
        } else if (mensagem[i] >= 'a' && mensagem[i] <= 'z') {
            mensagem[i] = ((mensagem[i] - 'a' + k) % 26) + 'a';
        }
    }
}

int main() 
{
    char mensagem[100];
    int k;

    printf("Digite a mensagem a ser criptografada: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite o valor de K: ");
    scanf("%d", &k);

    criptografarCesar(mensagem, k);

    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
