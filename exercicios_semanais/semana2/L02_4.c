#include <stdio.h>
int main(void)
{
	int number;
	int count = 0;
	int soma = 0;
	printf("Digite valores positivos ou -1 para sair:\n");
	do
	{
		scanf("%i", &number);
		if (number > -1)
		{
			soma += number;
			count++;
		}
	} while (number != -1);
	printf("A média é:\n %.6f\n", (float)soma / count);
	return 0;
}