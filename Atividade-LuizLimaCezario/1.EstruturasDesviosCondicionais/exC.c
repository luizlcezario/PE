#include <stdio.h>
#include <stdlib.h>

int *ordem(int *values, int numMax)
{
	int tmp = 0, c = 0;

	for (int i = 0; i < numMax - 1; i++)
	{
		if (values[i] < values[(i + 1) % numMax])
		{
			tmp = values[(i + 1) % numMax];
			values[(i + 1) % numMax] = values[i];
			values[i] = tmp;
			c++;
		}
	}
	if (c != 0)
		return ordem(values, numMax);
	return values;
}

int main(void)
{
	int *values = calloc(4, sizeof(int));
	int numMax = 3;

	for (int i = 0; i < numMax; i++)
	{
		printf("digite um valor inteiro:\n");
		scanf("%i", values + i);
	}
	printf("Este sao os valores lidos:\n { ");
	for (int i = 0; i < numMax; i++)
		printf("%i ", values[i]);
	printf("}\n");
	values = ordem(values, numMax);
	printf("Este sao os valores lidos:\n { ");
	for (int i = 0; i < numMax; i++)
		printf("%i ", values[i]);
	printf("}\n");
	free(values);
	return (0);
}