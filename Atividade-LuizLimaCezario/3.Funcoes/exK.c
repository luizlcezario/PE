#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int calc_triangle(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return (n + 2 * calc_triangle(n - 1) - calc_triangle(n - 2));
}

int main(void)
{
	for (int i = 0; i < 6; i++)
		printf("n = %i  t(n) = %i\n", i, calc_triangle(i));
}