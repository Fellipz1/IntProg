/* 5. O sistema de uma biblioteca online deve ser capaz de procurar um dado livro pelo o seu título ou por parte dele. Dessa forma, desenvolva um programa para registrar 6 livros no sistema.  
O programa deve solicitar ao usuário o título (ou parte dele) do livro a ser buscado e imprimir o resultado da busca com todos os dados do livro em questão. 
Cada livro é armazenado com o seu título (máximo de 50 caracteres), autor (máximo de 30 caracteres), código e preço.
*/

#include <stdio.h>

#define MAX_TITULO 50
#define MAX_AUTOR 30
#define MAX_LIVROS 6
typedef struct
{
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int codigo;
    float preco;
} Livro;
void registrarLivros(Livro livros[])
{
	int i;
    printf("Registro de livros\n");
    for(i = 0; i < MAX_LIVROS; i++)
	{
        printf("\nLivro %d\n", i + 1);
        printf("Titulo: ");
        fgets(livros[i].titulo, MAX_TITULO, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
        printf("Autor: ");
        fgets(livros[i].autor, MAX_AUTOR, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
        printf("Codigo: ");
        scanf("%d", &livros[i].codigo);
        printf("Preco: ");
        scanf("%f", &livros[i].preco);
        getchar();
    }
}
void procurarLivro(Livro livros[], char procurarTitulo[])
{
    int encontrado = 0;
    int i;
    printf("\nResultado da busca pelo titulo '%s':\n", procurarTitulo);
    for(i = 0; i < MAX_LIVROS; i++)
	{
        if(strstr(livros[i].titulo, procurarTitulo) != NULL)
		{
            printf("\nLivro %d\n", i + 1);
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Codigo: %d\n", livros[i].codigo);
            printf("Preco: R$ %.2f\n", livros[i].preco);
            encontrado = 1;
        }
    }
    if(!encontrado)
	{
        printf("Nenhum livro encontrado com o titulo '%s'.\n", procurarTitulo);
    }
}
int main()
{
    Livro livros[MAX_LIVROS];
    char procurarTitulo[MAX_TITULO];
    registrarLivros(livros);
    printf("\nDigite o titulo (ou parte dele) do livro a ser buscado: ");
    fgets(procurarTitulo, MAX_TITULO, stdin);
    procurarTitulo[strcspn(procurarTitulo, "\n")] = '\0';
    procurarLivro(livros, procurarTitulo);
    return 0;
}
