#include <stdio.h>

int triangular(int verify)
{
	int final = 0;
	int i;
	for (i = 1; final < verify; i++)
	{
		final += i;
	}
	if (final == verify)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int perfeito(int verify)
{
	int final = 0;

	for (int i = 1; i <= verify / 2 && final < verify; i++)
	{
		if (verify % i == 0)
		{
			final += i;
		}
	}
	if (verify == final)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int verify;
	int perfeitoR;
	int triangularR;

	printf("Digite o perimetro:\n");
	scanf("%i", &verify);

	perfeitoR = perfeito(verify);
	triangularR = triangular(verify);

	if (perfeitoR == 1 && triangularR == 1)
	{
		printf("Paz\n");
	}
	else if (perfeitoR == 1 || triangularR == 1)
	{
		printf("Pensar\n");
	}
	else
	{
		printf("Atacar\n");
	}
}