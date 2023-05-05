// 9 - Desenvolva a função classificaCaractere que lê um caractere e imprime uma das seguintes
// Mensagens:
// "Operador matematico" (+, -, *, /, %);
// "Operador relacional" (<, >);
// "Operador logico" (!);
// "Outro simbolo valido em C" (&, =, ", parênteses e chaves);
// "Caractere nao identificado".
// Teste seu programa com <, $ e ).

#include <stdio.h>

void classificaCaractere ()
{
	char caracter;
	
	printf("Digite um operador matematico: \n");
	scanf("%c", &caracter);
	
	switch (caracter){
		
		case '+': case '-': case '*': case '/': case'%':
		printf("Operador matematico");
								break;
		case '<': case '>':
		printf("Operador relacional");
								break;
		case '!':
		printf("Operador logico");
							break;
		case '&': case '=' : case '"' : case '(': case ')': case '{': case '}':
		printf("Outro simbolo valido em C");
										break;
		default :
			printf("Caractere nao identificado");
	}
}

int main()
{
	classificaCaractere ();
	return 0;
}

