// 3 - 

#include <stdio.h>
void parImpar (int x, int y)
{
	int par = 0;
	int impar = 0; 
	int cont=x;

	while(x < y && cont <= y)
	{
		if(cont%2!=0)
		{
			impar ++; 
			cont++;
		}
		else
		{ 
			par ++;
			cont ++; 
		}
	}

	printf ("Numeros impares = %d\n",impar);
	printf ("Numeros pares = %d\n",par);
}

int main()
{
	int x, y;

	printf("Digite um valor para x: ");
	scanf("%d", &x);

	printf("Digite um valor para y: ");
	scanf("%d", &y);

	parImpar(x,y);
	
	return 0;
}
