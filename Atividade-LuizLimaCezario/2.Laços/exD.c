
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n = 0;

	printf("digite um numero:\n");
	scanf("%i", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}