#include <stdio.h>
#include <stdlib.h>

/**
 * @brief B Dado o pre¸co `a vista de um determinado produto, calcular o pre¸co total a pagar e o valor da presta¸c˜ao mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em trˆes vezes, dever´a ser dado um acr´escimo de 10% no total a ser pago. Se o pagamento for parcelado em cinco vezes, o acr´escimo ´e de 20%.
 *
 */

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