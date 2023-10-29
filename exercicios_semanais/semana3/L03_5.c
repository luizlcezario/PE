#include <stdio.h>
#include <math.h>

int inteiroPositivo();
int funcaoT(int n);

int funcaoT(int n)
{
	if (n < 10)
		return 10;
	return (funcaoT(n / 5) + funcaoT((7 * n / 10) + 1) + n);
}

int inteiroPositivo()
{
	int i = 0;
	printf("Digite o valor de N: ");
	scanf("%i", &i);
	return i;
}

int main()
{
	int a = inteiroPositivo();
	printf("%i\n", funcaoT(a));
}