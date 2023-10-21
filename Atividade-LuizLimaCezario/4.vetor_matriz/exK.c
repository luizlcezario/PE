#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
	professor nessa questao vc pede para fazer essas funcoes para uma matriz de 1xn para 1 <= n <= 1000 para as funcoes nao perderem o sentido irei trabalhar fazendo elas de aXn sendo 1 <= n <= 1000 e  1 <= a <= 1000.
*/

int printMatriz(int **matriz, int l, int c)
{
	for (int j = 0; j < l; j++)
	{
		printf("[ ");
		for (int i = 0; i < c; i++)
			printf("%4i ", matriz[j][i]);
		printf("]\n");
	}
}

int printTransposta(int **matriz, int l, int c)
{
	for (int j = 0; j < c; j++)
	{
		printf("[ ");
		for (int i = 0; i < l; i++)
			printf("%4i ", matriz[i][j]);
		printf("]\n");
	}
}

void readMatriz(int **matriz, int l, int c)
{
	for (int j = 0; j < l; j++)
	{
		for (int i = 0; i < c; i++)
		{
			int a = 0;
			printf("digite o numero da posicao %i da linha %i : ", i + 1, j + 1);
			scanf("%i", &a);
			matriz[j][i] = a;
		}
	}
}
int main()
{
	int c = 1, l = 1;
	printf("digite o numero de linhas: ");
	scanf("%i", &l);
	printf("digite o numero de colunas: ");
	scanf("%i", &c);
	if (l < 1 || l > 30 || c < 1 || c > 30)
		printf("por favor digite um l ou c que seja valido");
	int matriz[l][c];
	readMatriz((int **)matriz, l, c);
	printf("original\n");
	printMatriz((int **)matriz, l, c);
	printf("transposta\n");
	printTransposta((int **)matriz, l, c);
}