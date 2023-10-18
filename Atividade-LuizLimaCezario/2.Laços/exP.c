#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n;

	printf("digite um n:\n");
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2 + 1; j++)
		{
			if (j >= (n - i) && j <= (n + i))
				printf("*");
			else
				printf(".");
		}
		printf("\n");
	}
}