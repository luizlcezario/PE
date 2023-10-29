#include <stdio.h>
#include <stdlib.h>
void exibeMatriz(int **matriz, int l, int c);
void read_matriz(int **matriz, int l, int c);
void distribuiCameras(int **matriz, int l, int c);
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

void distribuiCameras(int *vigiada, int **matriz, int l, int c, int k)
{
	
}

void read_matriz(int **matriz, int l, int c)
{
	for (int i = 0; i < l; i++)
	{
		matriz[i] = malloc(sizeof(int) * c);
		for (int j = 0; j < c; j++)
			scanf("%i", &matriz[i][j]);
	}
}

int error()
{
	printf("Saéda :\n-1\n");
	return -1;
}

int main(void)
{
	int l = 0, c = 0, k = 0;
	printf("Entrada: \n");
	scanf("%i", &l);
	scanf("%i", &c);
	scanf("%i", &k);
	if (l < 3 || l > 30 || c < 3 || c > 50 || k < 1 || k > l)
		return error();
	int **matriz;
	matriz = malloc(l * sizeof(int *));
	int *vigiada = malloc(c * sizeof(int));
	read_matriz(matriz, l, c);
	distribuiCameras(vigiada, matriz, l, c, k);
	for (int i = 0; i < l; i++)
	{
		free(matriz[i]);
	}
	free(matriz);
	free(vigiada);
	return 0;
}