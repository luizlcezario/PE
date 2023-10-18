#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int n;

	printf("digite um n:\n");
	scanf("%i", &n);
	printf("divisivel por:");
	for (int i = 1; i < n / 2 + 1; i++)
	{
		if (n % i == 0)
			printf(" %i", i);
	}
	printf("\n");
}