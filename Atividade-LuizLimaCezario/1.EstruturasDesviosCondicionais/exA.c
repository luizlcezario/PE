#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char produtos[3][50];
	double values[3];

	for (int i = 0; i < 2; i++)
	{
		printf("digite o nome do produto:\n");
		scanf("%s", produtos[i]);
		printf("digite o valor do produto:\n");
		scanf("%lf", values + i);
	}
	printf("Este sao os produtos que valem mais de 20 rais:\n");
	for (int i = 0; i < 2; i++)
	{
		if (values[i] >= 20.0)
		{
			printf("nome: %s \nvalor: R$ %0.2f\n", produtos[i], values[i]);
		}
	}
	printf("Este sao os produtos que valem menos de 10 rais:\n");
	for (int i = 0; i < 2; i++)
	{
		if (values[i] <= 10.0)
		{
			printf("nome: %s\nvalor: R$ %0.2f\n", produtos[i], values[i]);
		}
	}
	return (0);
}