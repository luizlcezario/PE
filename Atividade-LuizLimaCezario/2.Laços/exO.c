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
		for (int j = 0; j < n; j++)
		{
			if (j == i)
				printf("X");
			else
				printf("+");
		}
		printf("\n");
	}
}