#include <stdio.h>
#include <math.h>

int inteiroPositivo();
int decideSePrimo(int num, int div);

int decideSePrimo(int num, int div)
{
	if (div == num)
		return 1;
	if (num == 2 || num == 3 || num == 1)
		return 1;
	if (num % div == 0)
		return 0;
	return decideSePrimo(num, div + 1);
}

int inteiroPositivo()
{
	int i = 0;
	printf("Digite um valor inteiro:\n");
	scanf("%i", &i);
	return i;
}

int main()
{
	int a = inteiroPositivo();
	if (decideSePrimo(a, 4))
	{
		printf("O número %i é primo.\n", a);
	}
	else
	{
		printf("O número %i não é primo.\n", a);
	}
}