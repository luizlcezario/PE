#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Fa¸ca um programa que determine o menor m´ultiplo de um inteiro dado maior do que um outro
inteiro dado. Exemplo: se a entrada for 13 e 100, a sa´ıda dever´a ser 104 (104 ´e o menor m´ultiplo
de 13 que ´e maior que 100). (Dica: ser´a que o m´ultiplo ´e o dividendo - resto + divisor?)
 */

int main(void)
{
	int m, t;

	printf("programa de menor multiplo maior que o segundo numero!\n");
	printf("digite o nuuemro que sera procurado o multiplo: ");
	scanf("%i", &m);
	printf("digite o numero que sera a base para o  multiplo: ");
	scanf("%i", &t);
	printf("o menor  numero multiplo de %i e maior que %i é: %i \n", m, t, t + (m - t % m));
	return 0;
}