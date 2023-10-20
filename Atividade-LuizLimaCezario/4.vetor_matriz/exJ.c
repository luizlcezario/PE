#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int verificaName(char *name)
{
	int l = 0;
	int s = -1;

	while (name[l] != 0)
	{
		if (name[l] == ' ')
			s = l;
		else if (l == (s + 1) && (name[l] < 'A' || name[l] > 'Z'))
			return l + 1;
		else if (l > (s + 1) && (name[l] < 'a' || name[l] > 'z'))
			return l;
		l++;
	}
	return l;
}

char *lastName(char *name)
{
	char *last = name;

	while (*name)
	{
		if (*name == ' ')
			last = name;
		name++;
	}
	return last;
}

int main(void)
{
	char name[50];

	printf("digite um nome: ");
	fgets(name, 50, stdin);
	char *end = strchr(name, '\n');
	*end = 0;
	int l = verificaName(name);
	if (l == strlen(name))
		printf("Bem Vindo Sr. %s\n", lastName(name));
	else
		printf("Erro de digitacao na posicao %i\n", l);
}