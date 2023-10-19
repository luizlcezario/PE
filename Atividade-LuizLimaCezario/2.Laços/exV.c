#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= 5 && j < (5 - i))
				printf("*");
			else if (i >= 5 && j >= (10 - i) - 1)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}