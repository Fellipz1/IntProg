// 2 - Escreva um programa que pergunte ao usuário quantos alunos têm na sala dele. Em seguida, crie uma função que receba essa quantidade de alunos e peça ao 
// usuário para que entre com as notas de todos os alunos da sala, uma por vez. A função deve retornar a média das notas dos alunos.

#include <stdio.h>

float calcularMedia(int quantidadeAlunos) {
    float somaNotas = 0;
    float nota;
    int cont;
    
    for (cont = 1; cont <= quantidadeAlunos; cont++) {
        printf("Digite a nota do aluno %d: ", cont);
        scanf("%f", &nota);
        somaNotas += nota;
    }
    
    float media = somaNotas / quantidadeAlunos;
    return media;
}

int main() {
    int quantidadeAlunos;
    
    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &quantidadeAlunos);
    
    float media = calcularMedia(quantidadeAlunos);
    
    printf("A media da nota dos alunos = %.2f\n", media);
    
    return 0;
}
