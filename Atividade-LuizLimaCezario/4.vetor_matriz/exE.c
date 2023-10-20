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

int find_elem(int *vetor, int size, int find)
{
	int small = 0;
	while (small <= size)
	{
		int medio = small + (size - small) / 2;
		if (vetor[medio] == find)
			return medio + 1;
		if (vetor[medio] < find)
			small = medio + 1;
		else
			size = medio - 1;
	}
	return -1;
}

int main()
{
	int size = 0;
	int find = 0;

	printf("digite o tamanho do seu vetor :");
	scanf("%i", &size);
	int vetor[size];
	for (int i = 0; i < size; i++)
	{
		printf("digite o numero da posiao %i: ", i + 1);
		scanf("%i", vetor + i);
	}
	ordenar(vetor, size);
	printf("este e o vetor ordenado = [ ");
	for (int i = 0; i < size; i++)
	{
		printf("%i ", vetor[i]);
	}
	printf("]\n");
	printf("digite o numero que deseja buscar :");
	scanf("%i", &find);
	int pos = find_elem(vetor, size, find);
	if (pos == -1)
		printf("este elemento nao esta no vetor\n");
	else
		printf("o elemento esta na posicao %i\n", pos);
}