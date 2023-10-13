#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Leia um n´umero inteiro. Se o n´umero lido for positivo, escreva uma mensagem indicando se ele ´e par ou ´ımpar.
 *
 */

int main(void)
{
	int a;
	printf("digite o numero que vai  ser analisado:");
	scanf("%i", &a);
	if (a < 1)
		printf("por favor tente novamente com um numero maior que 0\n");
	else if (a % 2 == 0)
		printf("o numero %i é par!\n", a);
	else
		printf("o numero %i é impar!", a);
	return 0;
}