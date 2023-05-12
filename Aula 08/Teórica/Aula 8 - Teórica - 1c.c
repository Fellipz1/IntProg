// c) Reescreva o programa para que o usuário comece informando o número de alunos. Neste caso, a quantidade de notas lidas deve ser igual ao número informado. Teste seu programa com: 3 64 92 31

#include <stdio.h>
void situacao (int cont, int valor)
{
cont=0;
   while (cont<valor)
    {
        float n;
        
        printf("Digite outra nota: ");
        scanf("%f", &n);
        
        if (n>=70 && n<=100)
        {
        	printf("Aprovado\n");
        }
      	else {
          	if (n <70 && n>=0) {
              printf("Reprovado\n");
          	}
          	else {
   
           printf("Nota invalida\n");
          }
      	}
    	cont++;
    }
}
int main()
{
	int valor, cont=0;
	float n;
	
	printf("Digite quantas notas voce precisa: \n");
    scanf("%d", &valor);
    
    situacao(cont, valor);

    return 0;
}
