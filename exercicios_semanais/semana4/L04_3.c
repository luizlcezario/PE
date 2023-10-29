#include <stdio.h>
#include <stdlib.h>
void exibeMatriz(int **matriz, int l, int c);
void read_matriz(int **matriz, int l, int c);

void exibeMatriz(int **matriz, int l, int c)
{
	printf("A matriz digitada é: \n");
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
			printf("%i ", matriz[i][j]);
		printf("\n");
	}
}
void read_matriz(int **matriz, int l, int c)
{
	for (int i = 0; i < l; i++)
	{
		matriz[i] = malloc(sizeof(int) * c);
		for (int j = 0; j < c; j++)
		{
			printf("Digite o elemento (%i,%i): \n", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
}

int main(void)
{
	int l = 0, c = 0;
	printf("Digite o tamanho da matriz: \n");
	scanf("%i", &l);
	scanf("%i", &c);
	int **matriz;
	matriz = malloc(l * sizeof(int *));
	read_matriz(matriz, l, c);
	exibeMatriz((int **)matriz, l, c);
	for (int i = 0; i < l; i++)
	{
		free(matriz[i]);
	}
	free(matriz);
}