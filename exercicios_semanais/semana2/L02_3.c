#include <stdio.h>

int main(void)
{
	int multi;
	int final = 1;
	int tmp;

	printf("Digite um número inteiro:\n");
	scanf("%i", &multi);
	tmp = multi;
	while (multi > 0)
	{
		final = final * multi;
		multi--;
	}
	if (tmp == 0)
	{
		final = 1;
	}
	printf("%i! = %i", tmp, final);
	return 0;
}