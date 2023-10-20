#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char name[50];

	printf("digite seu nome: ");
	scanf("%s", name);
	for (int i = 0; i < strlen(name) ; i++)
	{
		if ((i + 1) % 2 == 1)
			printf("letter %i = %c\n", i + 1, name[i]);
	}
}