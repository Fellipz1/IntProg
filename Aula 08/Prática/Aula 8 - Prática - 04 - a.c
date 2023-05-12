// 4 - a - Escreva uma função que lê um caractere do teclado que indique o sexo de uma pessoa. A função deve retornar apenas o valor 'F' ou o valor 'M', por isso, enquanto o usuário digitar um valor inválido, 
// a função deve solicitar que ele digite um destes dois valores.

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

int main()
{
    char sexo = lerSexo();
    printf("Sexo: %c\n", sexo);

    return 0;
}
