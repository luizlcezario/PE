#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	for (int i = 1; i < 11; i++)
	{
		printf("Tabuada do %i:", i);
		for (int j = 1; j < 11; j++)
		{
			printf(" %i", i * j);
			if (j == 10)
				printf(".");
			else
				printf(",");
		}
		printf("\n");
	}
	return 0;
}