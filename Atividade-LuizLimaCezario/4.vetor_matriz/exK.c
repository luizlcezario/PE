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
			printf("%4i ", matrizT[j][i]);
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
	if (a > l || a < 1)
	{
		printf("erro digite uma Coluna valida!");
		exit(0);
	}
	for (int i = 0; i < l; i++)
	{
		m += matriz[a][i];
	}
	return m / l;
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
int printMenu()
{
	printf("Digite oque deseja fazer:\n
		1.printar Matriz\n
		2.Calcular media de numeros de uma linha\n
		3.Calcular media de numeros de uma coluna\n
		4.Soma da diagonal\n
		5.Verificar simetria\n
		6.trocar valores de uma linha\n
		7.Trocar soma de uma linha e uma coluna\n
		8.Verifica se a um elemento dominante na matriz\n
		0.EXIT\n
	");
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
	int option = 1;
	while (option != 0)
	{
		option = printMenu();
		if (option == 1)
			printMatriz();
		else if (option == 2)
			printf("a medi e %i!", mediaMatrizLine(matriz, l));
		else if (option == 2)
			printf("a medi e %i!", mediaMatrizColuna(matriz, l));
	}
	readMatriz(matriz, l c);
	printMatriz(matriz, l c);
	printf("media da linha %i", mediaMatrizLine(matriz, l));
	printf("media da linha %i", mediaMatrizColuna(matriz, c));
}