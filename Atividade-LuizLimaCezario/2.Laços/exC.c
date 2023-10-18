
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[1000];

	while (strlen(str) > 40 || strlen(str) == 0)
	{
		printf("digite uma frase ate 40 caracteres!\n");
		scanf("%s", str);
	}
}