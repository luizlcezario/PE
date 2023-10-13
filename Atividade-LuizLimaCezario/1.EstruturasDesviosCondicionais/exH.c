#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Fa¸ca um programa que lˆe um n´umero e se for maior que 20, imprima sua metade
 *
 */

int main(void)
{
	int i = 0;

	printf("digite um numero: ");
	scanf("%i", &i);
	if (i > 20)
		printf("%i\n", i / 2);
	return (0);
}