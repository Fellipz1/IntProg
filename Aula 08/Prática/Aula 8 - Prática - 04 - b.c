// 4 - b - Escreva uma fun��o que leia um valor inteiro do teclado representando a idade de uma pessoa. Espera-se que a fun��o retorne um valor entre 0 e 130.
// Assim, enquanto o usu�rio digitar um valor inv�lido, a fun��o deve solicitar novamente o valor.

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
