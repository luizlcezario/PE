#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ordenar(int *vetor, int size)
{
	int tmp;

	for (int i = 0; i < size; i++)
	{
		int minP = i;
		for (int j = i + 1; j < size; j++)
		{
			if (vetor[j] < vetor[minP])
			{
				minP = j;
			}
		}
		tmp = vetor[i];
		vetor[i] = vetor[minP];
		vetor[minP] = tmp;
	}
}

int main()
{
	int vetor[8];

	for (int i = 0; i < 8; i++)
	{
		printf("digite o numero da posiao %i: ", i + 1);
		scanf("%i", vetor + i);
	}
	printf("[ ");
	int m = 0;
	int soma = 0;
	for (int i = 0; i < 8; i++)
	{
		printf("%i ", vetor[i]);
		if (vetor[i] > 30)
			m++;
		soma += vetor[i];
	}
	printf("]\n");
	printf("soma do vetor = %i\n neste vetor tem %i maiores que 30.\n", soma, m);
}