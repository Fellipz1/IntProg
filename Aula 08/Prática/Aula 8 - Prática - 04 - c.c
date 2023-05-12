// 4 - c - Escreva um programa que leia o sexo e a idade de 15 pessoas, chamando as funções desenvolvidas acima para garantir que serão informados dados válidos.

#include <stdio.h>

char lerSexo()
{
    char sexo;
    printf("Digite a inicial do seu sexo: ");
    scanf(" %c", &sexo);

    while (sexo != 'F' && sexo != 'M' && sexo!='f' && sexo!='m')
    {
        printf("Valor invalido. Digite apenas F ou f para feminino no caso das mulheres ou M ou m para masculino no caso dos homens.\n");
        scanf(" %c", &sexo);
    }

    return sexo;
}
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
    char sexo;
	int idade;
    int cont=0;
    
	while (cont < 15)
    {
        printf("Pessoa %d:\n", cont + 1);

        sexo = lerSexo();
        idade = lerIdade();

        printf("Sexo: %c\n", sexo);
        printf("Idade: %d\n\n", idade);

        cont++;
    }


    return 0;
}
