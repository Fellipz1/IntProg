// b) Reescreva o programa para que ele repita a leitura e impressão para um grupo de alunos. A quantidade de notas lidas é desconhecida. O programa deve ser encerrado se for lido um valor inválido (fora do intervalo entre 0 e 100). Teste seu programa com a sequência: 87 59 94 108

#include <stdio.h>
int main()
{
    float n;
    
    printf("Digite sua nota: ");
    scanf ("%f",&n);
	while (n>=0 && n <=100)
    {        
        if (n>=70 )
        {
        	printf("Aprovado\n");
        }
      	else{
   	    	printf("Reprovado\n");
        }
        printf("Digite outra nota: ");
        scanf("%f", &n);
	}
      return 0;
}
