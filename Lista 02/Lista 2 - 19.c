// 19 - Escreva uma função que receba um vetor de valores reais e seu tamanho e leia valores do teclado para preencher todo o vetor apenas com valores positivos. Observe que valores negativos
// devem ser ignorados e a leitura deve ser encerrada assim que a última posição do vetor for preenchida. 

#include <stdio.h>

void preencher(float vetor[], int tamanho) 
{
    int i;
    float valor;
	
	i=0;
    do 
	{
        printf("Digite o valor do vetor %d:\n",i);
        scanf("%f", &valor);

        if (valor > 0) 
		{
        vetor[i] = valor;
    	i++;
    	}
	} while ( i < tamanho);
}

int main() {
    int tamanho;
	int i;
	
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    preencher(vetor, tamanho);

    printf("Valores do vetor preenchido apenas com valores positivos:\n");
    for (i = 0; i < tamanho; i++)
	{
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
