// 6. Escreva uma função potencia(base, expoente) que, quando chamada, retorna o resultado baseexpoente.
// Por exemplo, potencia(3, 4) deve retornar 81. Assuma que expoente é um inteiro maior ou igual a 1.

#include <stdio.h>

int potencia(int base, int expoente) 
{
    int resultado = 1;
    for (int i = 1; i <= expoente; i++)
	{
		resultado *= base;
    }
    return resultado;
}

int main() {
    int base = 3;
    int expoente = 4;
    int resultado = potencia(base, expoente);
    printf("%d elevado a %d = %d\n", base, expoente, resultado);
    return 0;
}
// Resultado: O terminal retornou o esperado, como podemos ver 3 elevado a 4 = 81.
