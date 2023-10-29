#include <stdio.h>

float somaDivisores(int n);
int inteiroPositivo(int i);

float somaDivisores(int n)
{
	float soma = 1;
	if (n == 1)
		return (0.0);
	for (int a = 2; a < n / 2 + 1; a++)
	{
		if (n % a == 0)
			soma += a;
	}
	return soma;
}

int inteiroPositivo(int a)
{
	int i = 0;
	printf("Digite o  %i número:\n", a);
	scanf("%i", &i);
	return i;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("A soma dos divisores: %0.f\n", somaDivisores(inteiroPositivo(i + 1)));
	}
}