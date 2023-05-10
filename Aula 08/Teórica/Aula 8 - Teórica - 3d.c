// d) Reescreva o programa para que ele imprima a tabuada de todo valor inteiro de 1 a 9.

#include <stdio.h>

void Tabuada (int z, int conta)
{
    while (conta<=10)   
    {
        int v= z*conta;
        z*conta == v;
        printf ("%d x %d = %d\n", z, conta, v);
        conta++;
    }
    return;
}


int main()
{
    printf("Tabuada de 1 a 9:\n");
    int cont = 0;
    Tabuada (1,cont);
    Tabuada (2,cont);
    Tabuada (3,cont);
    Tabuada (4,cont);
    Tabuada (5,cont);
    Tabuada (6,cont);
    Tabuada (7,cont);
    Tabuada (8,cont);
    Tabuada (9,cont);
 return 0;
}
