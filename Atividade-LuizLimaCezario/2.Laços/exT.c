#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
int main(void)
{
	int n;

	printf("digite um n:\n");
	scanf("%i", &n);
	int i;
	bool is = false;
	for (i = n + 1; n < INT_MAX; i++)
	{
		if (i != 2 && i != 3 && (i % 2 == 0 || i % 3 == 0))
			continue;
		int nb = 2;
		while (i % nb != 0 && nb < i)
			nb++;
		if (nb == i)
		{
			is = true;
			break;
		}
	}
	if (is == false)
		printf("this is the last prime in  the INT numbers");
	else
		printf("%i\n", i);
}