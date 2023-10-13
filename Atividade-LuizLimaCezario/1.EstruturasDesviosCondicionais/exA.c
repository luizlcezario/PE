#include <stdio.h>
#include <stdlib.h>
/**
 * @brief A Construa um programa em C que receba os nomes de 2 produtos de uma loja e o pre¸co unit´ario de cada um deles (em reais). O programa dever´a informar, com mensagens explicativas:
	• o nome dos produtos cujo pre¸co ´e superior a 20 reais;
	• o nome e o pre¸co correspondente dos produtos cujo pre¸co ´e inferior a 10 reais
 */
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