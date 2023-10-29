#include <stdio.h>
#include <stdlib.h>
#define L 10
#define C 5

void exibeMatriz(int **matriz, int l, int c);
void exibeMatrizTransposta(int **matriz, int l, int c);
void gerar_matriz(int **matriz, int l, int c, int seed);

void exibeMatriz(int **matriz, int l, int c)
{
	printf("A matriz é: \n\n");
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
			printf("%i ", matriz[i][j]);
		printf("\n");
	}
	printf("\n");
}

void exibeMatrizTransposta(int **matriz, int l, int c)
{
	printf("A transposta é: \n\n");
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < l; j++)
			printf("%i ", matriz[j][i]);
		printf("\n");
	}
	printf("\n");
}

void gerar_matriz(int **matriz, int l, int c, int seed)
{
	srand(seed);
	for (int i = 0; i < l; i++)
	{
		matriz[i] = malloc(sizeof(int) * c);
		for (int j = 0; j < c; j++)
			matriz[i][j] = rand() % 10;
	}
}

int main(void)
{
	int seed = 0;
	printf("Digite o valor da seed: \n");
	scanf("%i", &seed);
	int **matriz;
	matriz = malloc(L * sizeof(int *));
	gerar_matriz(matriz, L, C, seed);
	exibeMatriz(matriz, L, C);
	exibeMatrizTransposta(matriz, L, C);
	for (int i = 0; i < L; i++)
	{
		free(matriz[i]);
	}
	free(matriz);
}