#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int findMin(int *vetor, int size)
{
	if (size == 1)
		return (*vetor);
	int min = findMin(vetor + 1, size - 1);
	if (*vetor < min)
		return *vetor;
	return min;
}

int main()
{
	int vetor[10] = {1, 9, 10, 2, 3, 4, 5, 6, 7, 8};
	printf("%i\n", findMin(vetor, 10));
}