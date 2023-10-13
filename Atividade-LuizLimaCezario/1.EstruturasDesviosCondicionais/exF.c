#include <stdio.h>
#include <stdlib.h>

/**
 * @brief  Fa¸ca um programa que receba como entrada a altura e o sexo de uma pessoa (F ou M — para feminino ou masculino, respectivamente). Em seguida, calcule e imprima o seu peso ideal utilizando as seguintes f´ormulas: Para homens (H), o peso ideal ´e: (72.7 × altura) − 58. E para mulheres (F), o peso ideal ´e: (62.1 × altura) − 44.7.

 *
 */

int main(void)
{
	float h = 0.0;
	char s[2];

	printf("programa para o pesso ideal!\n");
	printf("digite sua altura: ");
	scanf("%f", &h);
	printf("digite se é homen(M) ou mulher(F): ");
	scanf("%s", s);
	if (h < 0.1)
	{

		if (*s == 'M')
			printf("seu peso ideal é: %0.2f\n", ((72.7 * h) - 58));
		else if (*s == 'F')
			printf("seu peso ideal é: %0.2f\n", ((62.1 * h) - 44.7));
		else
			printf("por favor digite um sexo valido\n");
	}
	else
		printf("por favor digite uma altura valido\n");
	return 0;
}