/* 16. Na eleição para o representante dos alunos da sala, apareceram quatro candidatos: Ana, Ari, Eva e Ivan. Faça uma função que receba o número de alunos presentes no dia da eleição e leia o nome
do candidato em que cada aluno votou. Ao final, exiba o número de votos que cada candidato obteve. Observe que eventuais erros de grafia no nome digitado por um eleitor indicam voto nulo.
*/

int contaVotos(int total) 
{
    int votosAna=0;
	int votosAri=0;
	int votosEva=0; 
	int votosIvan=0; 
	int votosNulo = 0;
    char voto[10];
    int i;
    
    for (i = 0; i < total; i++) 
	{
        printf("Digite o nome de acordo com o seu voto:");
        scanf(" %[^\n]", voto);
        
        if (strcmp(voto,"Ana") == 0)
		{
            votosAna++;
            printf("Votou na Ana\n");
		}
        if (strcmp(voto,"Ari") == 0)
		{
            votosAri++;
            printf("Votou na Ari\n");
		}
        if (strcmp(voto,"Eva") == 0)
		{
            votosEva++;
            printf("Votou na Eva\n");
		}
        if (strcmp(voto,"Ivan") == 0){
        	
            votosIvan++;
            printf("Votou na Ivan\n");
		}
        if (strcmp(voto,"Ana") != 0 && strcmp(voto,"Ari") != 0 && strcmp(voto,"Eva") != 0 &&strcmp(voto,"Ivan") != 0 )
            votosNulo++;
        
	}	
        printf("Votos:\n");
        printf("Ana: %d votos\n", votosAna);
        printf("Ari: %d votos\n", votosAri);
        printf("Eva: %d votos\n", votosEva);
        printf("Ivan: %d votos\n\n", votosIvan);
        printf("NULO: %d votos\n", votosNulo);
    
    return 0;
}

int main()
{
    int total = 0;
    printf("Quantos alunos presentes?");
    scanf("%d", &total);
    printf("\nCANDIDATOS:  Ana, Ari, Eva e Ivan\n");
    contaVotos(total);
    
    return 0;
}
