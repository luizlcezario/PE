#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (i < 1 && j >= 1 && j <= 4)
				printf("*");
			else if (i > 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}