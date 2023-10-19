#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j < i + 1) 
				printf("*");
		}
		printf("\n");
	}
	return 0;
}