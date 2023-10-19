#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(float n1, float n2, float n3)
{
	return (int)(pow(n1, 2) + (n2 + n3));
}

int main()
{
	float vetor[3];

	for (int i = 0; i < 3; i++)
	{
		printf("digite o numero %i em float:", i + 1);
		scanf("%f", vetor + i);
	}
	printf("numero final %i:\n", soma(vetor[0], vetor[1], vetor[2]));
}