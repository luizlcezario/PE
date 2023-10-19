#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int power(int n, int p)
{
	if (p == 0)
		return 1;
	if (p == 1)
		return n;
	if (n == 1)
		return 1;
	else
		return (n * power(n, p - 1));
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		printf("2^%i = %i\n", i, power(2, i));
	for (int i = 0; i < 6; i++)
		printf("3^%i = %i\n", i, power(3, i));
	for (int i = 0; i < 6; i++)
		printf("4^%i = %i\n", i, power(4, i));
}