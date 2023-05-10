// c) Reescreva o programa para que o usuário comece informando o número de alunos. Neste caso, a quantidade de notas lidas deve ser igual ao número informado. Teste seu programa com: 3 64 92 31

#include <stdio.h>

void situacao(float nota) 
{
    while (nota>=0 && nota<=100) {
        
    	if(nota>=70 && nota<101)
		{
			printf("Aprovado\n");
			break;
		}
		if (nota < 70 && nota>=0)
		{
			printf("Reprovado\n");
			break;
		}
    }
}

int main()
{
	int valor=0, cont=0;
	float nota;
	
	printf("Digite quantas notas voce precisa: \n");
    scanf("%d", &valor);
	   
    while (cont<valor)
    {
    	printf("Digite a nota do aluno: \n");
 		scanf("%f", &nota);
		situacao(nota);
	
		cont++;
	}
    return 0;
}
