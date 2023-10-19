#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char binary[64];
	long int final = 0;

	printf("digite um numero em binario\n");
	scanf("%s", binary);
	int power = 0;
	for (int n = strlen(binary) - 1; n >= 0; n--)
	{
		if (binary[n] - 48 == 1)
			final += pow(2, power);
		power++;
	}
	printf("%li\n", final);
}