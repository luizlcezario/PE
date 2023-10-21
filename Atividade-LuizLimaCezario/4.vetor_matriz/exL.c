#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
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

int mediaMatrizLine(int **matriz, int l)
{
	int m = 0;
	int a = 0;

	printf("digite o numero da Linha que sera feita a media: ");
	scanf("%i", &a);
	if (a > l || a < 1)
	{
		printf("erro digite uma linha valida!");
		exit(0);
	}
	for (int i = 0; i < l; i++)
	{
		m += matriz[a][i];
	}
	return m / l;
}

int mediaMatrizColuna(int **matriz, int c)
{
	int m = 0;
	int a = 0;

	printf("digite o numero da Coluna que sera feita a media: ");
	scanf("%i", &a);
	if (a > c || a < 1)
	{
		printf("erro digite uma Coluna valida!");
		exit(0);
	}
	for (int i = 0; i < c; i++)
	{
		m += matriz[a][i];
	}
	return m / c;
}

void somaDiagonal(int **matriz, int l, int c)
{
	if (l != c)
	{
		printf("somente para matrizes quuuadraticas!\n");
	}
	else
	{
		int soma = 0;
		for (int i = 0; i < l; i++)
			soma += matriz[i][i];
		printf("a soma da diagonal é: %i\n", soma);
	}
}

void readMatriz(int **matriz, int l, int c)
{
	for (int j = 0; j < l; j++)
	{
		for (int i = 0; i < c; i++)
		{
			printf("digite o numero da posicao %i da linha %i : ", i, j);
			scanf("%i", &matriz[j][i]);
		}
	}
}

void verificarSimetria(int **matriz, int l, int c)
{
	bool t = true;
	for (int j = 0; j < l; j++)
	{
		for (int i = 0; i < c; i++)
		{
			if (matriz[j][i] != matriz[i][j])
				t = false;
		}
	}
	if (t = false)
		printf("A matriz nao é simetrica\n");
	else
		printf("A é simetrica\n");
}

void trocarLinhas(int **matriz, int l, int c)
{
	int l1 = 0, l2 = 0;
	int tmp;

	printf("digite as primeira linha que deseja trocar: ");
	scanf("%i", &l1);
	printf("digite as segunda linha que deseja trocar: ");
	scanf("%i", &l2);
	if (l1 > l || l1 < 1 || l2 > l || l2 < 1)
	{
		printf("insira linhas validas\n");
		return;
	}
	for (int j = 0; j < c; j++)
	{
		tmp = matriz[l1][j];
		matriz[l1][j] = matriz[l2][j];
		matriz[l2][j] = tmp;
	}
	printMatriz((int **)matriz, l, c);
}

void somaLinhaColuna(int **matriz, int l, int c)
{
	int l1 = 0, c1 = 0;
	int tmp;

	printf("digite a linha que sera somada: ");
	scanf("%i", &l1);
	printf("digite a coluna que sera somada: ");
	scanf("%i", &c1);
	if (l1 > l || l1 < 1 || c1 > c || c1 < 1)
	{
		printf("insira linha e coluna validas\n");
		return;
	}
	int soma = 0;
	for (int j = 0; j < l; j++)
		soma += matriz[j][c1];
	for (int j = 0; j < c; j++)
	{
		if (j != c1)
			soma += matriz[l1][j];
	}
	printf("a soma da linha e coluna é: %i\n", soma);
}

bool verifcarDominacia(int **matriz, int il, int ic, int ml, int mc, int elem)
{
	for (int j = il; j < il + 17 && j < ml; j++)
	{
		for (int i = ic; i < ic + 17 && i < mc; i++)
		{
			if (matriz[j][i] > elem)
				return false;
		}
	}
	return true;
}

void elemtoDominante(int **matriz, int l, int c)
{
	bool t = false;
	int j = 0, i = 0;
	for (j = 0; j < l; j++)
	{
		for (i = 0; i < c; i++)
		{
			int il = j - 8;
			int ic = i - 8;
			if (il < 0)
				il = 0;
			if (ic < 0)
				ic = 0;
			if (verifcarDominacia(matriz, il, ic, l, c, matriz[j][i]))
			{
				t = true;
				break;
			}
		}
	}
	if (t)
		printf("existe pelo menos um elemento dominante e ele é o %i\n", matriz[j][i]);
	else
		printf("nao existe elemento dominante\n");
}

int printMenu()
{
	printf("Digite oque deseja fazer:\n"
		   "1.printar Matriz\n"
		   "2.Calcular media de numeros de uma linha\n"
		   "3.Calcular media de numeros de uma coluna\n"
		   "4.Soma da diagonal\n"
		   "5.Verificar simetria\n"
		   "6.trocar valores de uma linha\n"
		   "7.Soma de uma linha e uma coluna\n"
		   "8.Verifica se a um elemento dominante na matriz\n"
		   "0.EXIT\n");
	int a;
	scanf("%i", &a);
	return a;
}

int main()
{
	int c, l = 1;
	printf("digite o numero de linhas: ");
	scanf("%i", &l);
	printf("digite o numero de colunas: ");
	scanf("%i", &c);
	if (l < 1 || l > 1000 || c < 1 || c > 1000)
		printf("por favor digite um l ou c que seja valido");
	int matriz[l][c];
	readMatriz((int **)matriz, l, c);
	int option = 9;
	while (option != 0)
	{
		option = 9;
		option = printMenu();
		if (option == 1)
			printMatriz((int **)matriz, l, c);
		else if (option == 2)
			printf("a medi e %i!", mediaMatrizLine((int **)matriz, l));
		else if (option == 3)
			printf("a medi e %i!", mediaMatrizColuna((int **)matriz, c));
		else if (option == 4)
			somaDiagonal((int **)matriz, l, c);
		else if (option == 5)
			verificarSimetria((int **)matriz, l, c);
		else if (option == 6)
			trocarLinhas((int **)matriz, l, c);
		else if (option == 7)
			somaLinhaColuna((int **)matriz, l, c);
		else if (option == 8)
			elemtoDominante((int **)matriz, l, c);
	}
}