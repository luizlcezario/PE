#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verificarCantos(int matriz[100][100], int l, int c)
{
	for (int i = 0; i < l; i++)
	{
		if (matriz[i][0] != '0' || matriz[i][c - 1] != '0')
			return true;
	}
	for (int i = 0; i < c; i++)
	{
		if (matriz[0][i] != '0' || matriz[l - 1][i] != '0')
			return true;
	}
	return false;
}

bool vizinhos(int matriz[100][100], int j, int i, int l, int c)
{
	int a = j - 8;
	int b = i - 8;
	if (a < 0)
		a = 0;
	if (b < 0)
		b = 0;
	while (a < j + 8 && a < l)
	{
		if (matriz[a][i] == matriz[j][i])
			return true;
		a++;
	}
	while (b < i + 8 && a < c)
	{
		if (matriz[j][b] == matriz[j][i])
			return true;
		b++;
	}
	return false;
}

bool verificarVizinhos(int matriz[100][100], int l, int c)
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (matriz[j][i] == 'a' || matriz[j][i] == 'b' || matriz[j][i] == 'c')
			{
				if (vizinhos(matriz, j, i, l, c))
					return true;
			}
		}
	}
	return false;
}

int alocacao(int matriz[100][100], int l, int c)
{
	printf("digite o numero de linhas: ");
	scanf("%i", &l);
	printf("digite o numero de colunas: ");
	scanf("%i", &c);
	for (int j = 0; j < l; j++)
	{
		for (int i = 0; i < c; i++)
		{
			printf("digite o numero da posicao %i da linha %i : ", i, j);
			scanf("%c\n", &matriz[j][i]);
		}
	}
	if (verificarCantos(matriz, l, c))
		return 0;
	if (verificarVizinhos(matriz, l, c))
		return 0;
	return 1;
}

int main()
{
	int matriz[100][100];
	int i = alocacao(matriz, 0, 0);
	if (i)
	{
		printf("a sala e valida\n");
	}
	else
	{
		printf("a sala e invalida\n");
	}
}
