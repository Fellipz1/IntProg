// 2

#include <stdio.h>	
float media (int n)
{
	int i = 1;
	float soma, media, num;
	soma = 0;
	
	for(i=1;i<=n;i++)
	{
		printf("Digite um numero inteiro: \n");
		scanf("%f",&num);
		soma=soma+num;
	}
		media = (soma/n);
	return media;
}
int main ()
{
	int n;
	float media_val;
	printf("Digite de quantos valores voce quer a media: \n");
	scanf("%d",&n);
	
	media_val=media(n);
	
	printf("A media dos valores digitados = %.2f", media_val);
	return 0;
}
