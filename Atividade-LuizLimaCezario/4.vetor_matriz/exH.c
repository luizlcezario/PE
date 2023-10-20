#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void contAE(char *name)
{
	int a = 0, e = 0;
	char *tmp = name;

	while (*tmp)
	{
		if (*tmp == 'a' || *tmp == 'A')
			a++;
		if (*tmp == 'e' || *tmp == 'E')
			e++;
		tmp++;
	}
	printf("o nome %s contem %i letras 'a' e  %i letras 'e'.\n", name, a, e);
}

int main(void)
{
	char name[50];

	printf("digite um nome: ");
	scanf("%s", name);
	contAE(name);

	printf("digite um nome: ");
	scanf("%s", name);
	contAE(name);

	printf("digite um nome: ");
	scanf("%s", name);
	contAE(name);
}