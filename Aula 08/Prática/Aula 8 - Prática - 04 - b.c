// 4 - b - Escreva uma função que leia um valor inteiro do teclado representando a idade de uma pessoa. Espera-se que a função retorne um valor entre 0 e 130.
// Assim, enquanto o usuário digitar um valor inválido, a função deve solicitar novamente o valor.

#include <stdio.h>

int lerIdade()
{
    int idade;
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        while (idade < 0 || idade > 130)
        {
            printf("Valor invalido. Digite apenas idades entre 0 e 130.\n");
        	printf("Digite a sua idade: ");
        	scanf("%d", &idade);
        }    
        
    return idade;
	}
}

int main()
{
    int idade = lerIdade();
    printf("Idade: %d\n", idade);

    return 0;
}
