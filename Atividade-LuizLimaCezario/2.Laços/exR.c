#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n;
	printf("digite um n:\n");
	scanf("%i", &n);

	for (int i = 0; i < (n * 2) - 1; i++)
	{
		for (int j = 0; j < (n * 2) - 1; j++)
		{
			if (i < n && j >= (n - i) - 1 && j < (n + i))
				printf("*");
			else if (i > n - 1  && j > (i - n) && j < ((n * 2) - 1) - (i - (n - 1)))
				printf("*");
			else
				printf(".");
		}
		printf("\n");
	}
}