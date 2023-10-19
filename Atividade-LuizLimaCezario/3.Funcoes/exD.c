#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isVogal(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return true;
	return false;
}

int main()
{
	char c[100];

	printf("digite um nome: ");
	scanf("%s", c);
	for (int i = 0; i < strlen(c); i++)
	{
		if (isVogal(c[i]))
		{
			printf("%c é vogal\n", c[i]);
		}
		else
		{
			printf("%c é consoante\n", c[i]);
		}
	}
}