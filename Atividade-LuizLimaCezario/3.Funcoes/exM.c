#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPalindromo(int n)
{
	int aux = n;
	int palindromo = 0;

	while (aux)
	{
		int digito = aux % 10;
		palindromo = palindromo * 10 + digito;
		aux /= 10;
	}
	return (palindromo == n ? 1 : 0);
}

int main()
{
	int vetor[4] = {1001,
					23432,
					234,
					101};

	for (int i = 0; i < 4; i++)
	{
		printf("for %i: ", vetor[i]);
		if (isPalindromo(vetor[i]))
			printf("true\n");
		else
			printf("false\n");
	}
}