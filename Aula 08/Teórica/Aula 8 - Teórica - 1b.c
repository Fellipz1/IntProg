// b) Reescreva o programa para que ele repita a leitura e impressão para um grupo de alunos. A quantidade de notas lidas é desconhecida. O programa deve ser encerrado se for lido um valor inválido (fora do intervalo entre 0 e 100). Teste seu programa com a sequência: 87 59 94 108

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
	int valor=1;
	float nota;
	   
    while (valor!=0)
    {
    	printf("Digite 0 para fechar o programa e 1 para continuar \n");
    	scanf("%d", &valor);
    	
    	if(valor == 1){
    		printf("Digite a nota do aluno: \n");
   			scanf("%f", &nota);
			situacao(nota);
		}
		else {
			break;
		}
	}
    return 0;
}
