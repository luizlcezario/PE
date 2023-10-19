#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n = 0;
	printf("digite um n:\n");
	scanf("%i", &n);
	int list[n + 1];
	list[n] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j >= (n - i) - 1 && j <= (n + i)))
			{
				if (i == 0)
					list[j] = 1;
				else
				{
					list[j] = list[j] + list[j + 1];
				}
				printf("|%i|", list[j]);
			}
			else
			{
				list[j] = 0;
				printf(" ");
			}
		}
		printf("\n");
	}
}