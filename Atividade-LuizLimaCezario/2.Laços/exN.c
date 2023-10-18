#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	for (double i = 1; i < 10; i++)
	{
		printf("potenciais do %0.0lf:", i);
		for (double j = 1; j < 5; j++)
		{
			printf(" %0.0lf", pow(i, j));
			if (j == 4)
				printf(".");
			else
				printf(",");
		}
		printf("\n");
	}
	return 0;
}