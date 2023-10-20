#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char name[50];

	printf("digite seu nome: ");
	scanf("%s", name);
	int a = 0;
	while (name[a])
		a++;
	printf("%s tem %i letras\n", name, a);
}