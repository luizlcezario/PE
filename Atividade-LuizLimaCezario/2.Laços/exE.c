#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	double n = 0;
	double volume = 1;
	int i;

	for (i = 0; i < 100; i++)
	{
		printf("digite um numero:\n");
		scanf("%lf", &n);
		if (n == 0)
			break;
		volume *= n;
	}
	printf("Número de dimensões: %d\n", i);
	printf("Volume correspondente: %0.2lf\n", volume);
}