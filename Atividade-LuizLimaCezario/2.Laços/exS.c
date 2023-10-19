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
		for (int j = n - i; j > 0; j--)
		{
			printf("%i ", j);
		}
		printf("\n");
	}
	return 0;
}