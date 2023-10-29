#include <stdio.h>

int main(void)
{
	int div;
	int n_div_makes = 0;

	printf("Digite um número inteiro:\n");
	scanf("%i", &div);

	for (int i = 1; i <= div; i++)
	{
		if (div % i == 0)
		{
			n_div_makes++;
			printf("O número %i é divisível por %i.\n", div, i);
		}
	}
	if (n_div_makes == 2)
	{
		printf("O número %i é primo.\n", div);
	}
}