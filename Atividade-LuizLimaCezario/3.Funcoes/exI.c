#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char print_n(char *frase, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", frase);
	}
	return frase[strlen(frase) - 1];
}

int main()
{
	char frase[] = "ola muundo";

	printf("last  = %c\n", print_n(frase, 10));
}