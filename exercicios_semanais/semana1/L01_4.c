#include <stdio.h>

int main(void)
{
	int values[2];

	printf("Digite dois valores:\n");
	scanf("%i", &values[0]);
	scanf("%i", &values[1]);
	printf("A soma é %i\n", values[0] + values[1]);
	printf("O produto é %i\n", values[0] * values[1]);
	printf("A diferença é %i\n", values[0] - values[1]);
	printf("O quociente é %i\n", values[0] / values[1]);
	printf("O resto é %i\n", values[0] % values[1]);
}