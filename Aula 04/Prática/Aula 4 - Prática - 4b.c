// 4b) Em seguida, faça um programa (função principal) que leia três valores do teclado e imprima sua média, utilizando a função da letra a).

#include <stdio.h>

float SomaDeReaisESuaMedia(float a, float b, float c) 
{
    float m = a/3 + b/3 + c/3; 
    return m;
}
int main() 
{
    float a, b, c;
    float m; 
    
    printf("Digite tres valores pertencentes ao campos dos reais\n");

	printf("Valor 1:\n");
    scanf("%f", &a);

	printf("Valor 2:\n");
    scanf("%f", &b);
    
	printf("Valor 3:\n");
    scanf("%f", &c);
    
    m = SomaDeReaisESuaMedia(a,b,c);

    printf("Media dos tres valores = %f\n", m);

    return 0;
}
