#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int multiply(int n1, int n2)
{
	if (n1 < 0 && n2 < 0)
		return (0);
	return n1 * n2;
}

int main()
{
	printf("%i\n", multiply(2, 10));
}