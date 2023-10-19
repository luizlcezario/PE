#include <stdio.h>

int main()
{
	int linhaA, colunaA, linhaB, colunaB;

	// Entrada de dados
	printf("Informe a quantidade de linhas da matriz A : ");
	scanf("%d", &linhaA);
	printf("Informe a quantidade de colunas da matriz A : ");
	scanf("%d", &colunaA);
	printf("Informe a quantidade de linhas da matriz B : ");
	scanf("%d", &linhaB);
	printf("Informe a quantidade de colunas da matriz B : ");
	scanf("%d", &colunaB);

	float A[linhaA][colunaA], B[linhaB][colunaB], res[linhaA][colunaB], aux = 0;

	if (colunaA == linhaB)
	{
		for (int i = 0; i < linhaA; i++)
		{
			for (int j = 0; j < colunaA; j++)
			{
				printf("Informe o valor da Linha %i e da %i Coluna da Matriz A: ", i + 1, j + 1);
				scanf("%f", &A[i][j]);
			}
		}
		for (int i = 0; i < linhaB; i++)
		{
			for (int j = 0; j < colunaB; j++)
			{
				printf("Informe o valor da Linha %i e da %i Coluna da Matriz B: ", i + 1, j + 1);
				scanf("%f", &B[i][j]);
			}
		}
		// Imprime as matrizes definidas
		printf("Matriz A \n");

		for (int i = 0; i < linhaA; i++)
		{
			for (int j = 0; j < colunaA; j++)
			{
				printf("%.f\t", A[i][j]);
			}
			printf("\n");
		}
		printf("Matriz B\n");
		for (int i = 0; i < linhaB; i++)
		{
			for (int j = 0; j < colunaB; j++)
			{
				printf("%.f\t", B[i][j]);
			}
			printf("\n");
		}

		printf(" Matriz da multiplicacao \n");

		// Processamento e saida em tela  =  PRODUTO DAS MATRIZES
		for (int i = 0; i < linhaA; i++)
		{
			for (int j = 0; j < colunaB; j++)
			{
				res[i][j] = 0;
				for (int x = 0; x < linhaB; x++)
				{
					aux += A[i][x] * B[x][j];
				}
				res[i][j] = aux;
				aux = 0;
			}
		}
		for (int i = 0; i < linhaA; i++)
		{
			for (int j = 0; j < colunaB; j++)
			{
				printf("%.f\t", res[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Erro no calculo\n");
	}
}