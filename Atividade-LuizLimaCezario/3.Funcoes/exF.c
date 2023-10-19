#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(int n1, int n2, int n3)
{
	printf("%i\n", n1 + n2 + n3);
}

int main()
{
	int vetor[3];

	for (int i = 0; i < 3; i++)
	{
		printf("digite o numero %i em int:", i + 1);
		scanf("%i", vetor + i);
	}
	soma(vetor[0], vetor[1], vetor[2]);
}