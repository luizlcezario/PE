#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isVogal(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return true;
	return false;
}

int main()
{
	char c;

	printf("digite uma letra: ");
	scanf("%c", &c);
	if (isVogal(c))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}