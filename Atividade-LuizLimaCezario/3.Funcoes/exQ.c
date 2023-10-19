#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int log_c2(int arg, int base, int esponent, int x)
{
	if (base <= 1 || x > arg)
		return -1;
	else if (x == arg)
		return esponent;
	return log_c2(arg, base, esponent + 1, x * base);
}

int main()
{
	printf("%i \n", log_c2(4, 2, 0, 1));
	return 0;
}