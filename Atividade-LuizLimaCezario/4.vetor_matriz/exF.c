#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int vetor[10];
	int a = 0;

	printf("[ ");
	for (int i = 2; i <= 20; i += 2)
	{
		vetor[a] = i;
		a++;
		printf("%i ", i);
	}
	printf("]\n");
}