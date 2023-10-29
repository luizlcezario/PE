#include <stdio.h>

int main(void)
{
	float real;

	printf("Digite o valor de x:\n");
	scanf("%f", &real);
	printf("O valor de y é: %0.2f\n", real * real - 2 * real + 3);
	return (0);
}