// 4 - a - Escreva uma fun��o que l� um caractere do teclado que indique o sexo de uma pessoa. A fun��o deve retornar apenas o valor 'F' ou o valor 'M', por isso, enquanto o usu�rio digitar um valor inv�lido, 
// a fun��o deve solicitar que ele digite um destes dois valores.

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
