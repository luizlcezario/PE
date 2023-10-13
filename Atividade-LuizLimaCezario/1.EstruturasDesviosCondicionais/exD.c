#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Leia 2 n´umeros a e b. Escreva um algoritmo para calcular a solu¸c˜ao da equa¸c˜ao de primeiro grau ax + b = 0, que vale x = −(b/a), se o valor de a for diferente de zero. Al´em disso, seu programa deve imprimir mensagens de acordo com os casos: A equa¸c˜ao n˜ao admite solu¸c˜ao e a equa¸c˜ao admite infinitas solu¸c˜oes.
 *
 */

int main(void)
{
	int a, b;

	printf("este programa resolve a equaçao de primeiro grau  ax + b = 0!\n");
	printf("digite o valor de a:");
	scanf("%i", &a);
	printf("digite o valor de b:");
	scanf("%i", &b);
	if (a == 0)
	{
		if (b == 0)
			printf("a equação admite infinitas solução!\n");
		else
			printf("a equação não admite solução!\n");
	}
	else
	{
		int x = -(b / a);
		printf("a solução da equação é x = %i\n", x);
	}
	return 0;
}