#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double value;
	int parcelas;

	printf("digite o valor do produto:\n");
	scanf("%lf", &value);
	printf("digite a quantidade de parcelamentos do produto:\n");
	scanf("%i", &parcelas);

	if (parcelas >= 5)
	{
		value = value + value * 0.2;
	}
	else if (parcelas >= 3)
	{
		value *= value + value * 0.1;
	}
	printf("O valor total a pagar sera: R$ %0.2f \n", value);
	printf("O valor de cada parcela sera: R$ %0.2f\n", value / parcelas);
	return (0);
}