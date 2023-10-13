#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Escreva um programa que, dado um n´umero que represente uma quantidade de minutos, converta
o intervalo de tempo para horas, minutos e segundos. Aten¸c˜ao: Os n´umeros de minutos e de
segundos devem ser estritamente menores que 60. Por exemplo, se o tempo dado for 145,87
minutos, o programa deve fornecer 2 horas 25 minutos e 52,2 segundos.
 *
 */

int main(void)
{
	float minutos, m;

	printf("qual é a minutagem: ");
	scanf("%f", &minutos);
	m = (int)minutos;
	printf("o harario é: %i horas e  %i  minutos e %0.2f segundos\n", (int)(minutos) / 60, (int)(minutos) % 60, (minutos - m) * 60);
	return 0;
}