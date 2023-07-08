// 8) Faça um programa que receba três nomes (de no máximo 100 caracteres cada) e as idades das respectivas pessoas em um vetor de estruturas. Após o recebimento, listar os três nomes armazenados neste
// vetor por ordem crescente de idades.

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};
int main(){
    struct Pessoa pessoas[3];
    int i, j;
    struct Pessoa temp;
    for(i = 0; i < 3; i++){
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, 50, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; 
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        getchar();
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 - i; j++){
            if(pessoas[j].idade > pessoas[j + 1].idade){
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
    printf("\nNomes em ordem crescente de idade:\n");
    for(i = 0; i < 3; i++){
        printf("%s\n", pessoas[i].nome);
    }
    return 0;
}
