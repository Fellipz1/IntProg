// 2 - Escreva um programa que pergunte ao usu�rio quantos alunos t�m na sala dele. Em seguida, crie uma fun��o que receba essa quantidade de alunos e pe�a ao 
// usu�rio para que entre com as notas de todos os alunos da sala, uma por vez. A fun��o deve retornar a m�dia das notas dos alunos.

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
