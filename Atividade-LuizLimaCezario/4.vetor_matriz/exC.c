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
	int vetor[20];

	for (int i = 0; i < 20; i++)
	{
		printf("digite o numero da posiao %i: ", i + 1);
		scanf("%i", vetor + i);
	}
	ordenar(vetor, 20);
	printf("[ ");
	for (int i = 0; i < 20; i++)
	{
		printf("%i ", vetor[i]);
	}
	printf("]\n");
}