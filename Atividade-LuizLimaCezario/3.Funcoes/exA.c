#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void preencher(int *vetor)
{
	for (int i = 0; i < 5; i++)
	{
		printf("digite o numero que vai na posicao %i do vetor:", i + 1);
		scanf("%i", vetor + i);
	}
}

void imprimir(int *vetor)
{
	printf("[ ");
	for (int i = 0; i < 5; i++)
	{
		printf("%i ", vetor[i]);
	}
	printf("]\n");
}

void imprimir_quadrado(int *vetor)
{
	printf("[ ");
	for (int i = 0; i < 5; i++)
	{
		printf("%i ", pow(vetor[i], 2));
	}
	printf("]\n");
}

void imprimir_final(int *vetor)
{
	printf("first = %i\n", vetor[0]);
	printf("last = %i\n", vetor[3]);
}

void printMenu()
{
	printf("----------------------Digite o numero da ação----------------------\n");
	printf("1. Preencher o Vetor\n");
	printf("2. Printar Vetor\n");
	printf("3. Printar Vetor ao quadrado\n");
	printf("4. Printar primeiro e ultimo\n");
	printf("0. Sair\n");
}

int main()
{
	int vetor[5];
	int n = 0;

	for (int i = 0; i < 5; i++)
	{
		vetor[i] = 0;
	}
	while (1)
	{
		printMenu();
		scanf("%i", &n);
		switch (n)
		{
		case 0:
			exit(0);
		case 1:
			preencher(vetor);
			break;
		case 2:
			imprimir(vetor);
			break;
		case 3:
			imprimir_quadrado(vetor);
			break;
		case 4:
			imprimir_final(vetor);
			break;
		default:
			break;
		}
	}
}