#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Fa¸ca um programa que solicite um nome e mostre o primeiro, o ´ultimo, o quarto, do primeiro ao
terceiro, do primeiro ao ´ultimo caracter especificando todas as suas posi¸c˜oes. Mostrar quantas
letras tem o nome e, finalmente, escrevˆe-lo de tr´as para frente
 *
 * @return int
 */

int main(void)
{
	char name[100];

	printf("escreva um nome com mais de 4 letras:\n");
	scanf("%s", name);
	printf("O primeiro:\n");
	printf("1. [%c]\n", name[0]);
	printf("O Utimo:\n");
	printf("%i. [%c]\n", strlen(name), name[strlen(name) - 1]);
	printf("O quarto:\n");
	printf("4. [%c]\n", name[3]);
	printf("primeiro ao terceiro:\n");
	for (int a = 0; a < 3; a++)
		printf("%i. [%c]\n", a + 1, name[a]);
	printf("primeiro ao ultimo:\n");
	int i;
	for (i = 0; name[i] != 0; i++)
		printf("%i. [%c]\n", i + 1, name[i]);
	printf("este nome tem %i letras:\n", i);
	printf("Nome invertido:\n", i);
	while (--i >= 0)
		printf("%c", name[i]);
	printf("\n");
	return 0;
}