#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Reescreva cada um dos seguintes trechos de c´odigo de modo a utilizar apenas um comando if
 *
 */
// if (x > 0)
// {
// 	if (x < 13)
// 	{
// 		printf('IntervaloCorreto\n');
// 	}
// }
// if (D == 'F')
// {
// 	printf('Drepresentaumgenro\n');
// }
// if (D == 'M')
// {
// 	printf('Drepresentaumgenro\n');
// }
// if ((x % 2) == 0)
// {
// 	printf('xepar\n');
// }
// if ((x % 2) != 0)
// {
// 	printf('xeimpar\n');
// }
// if (ano < 0)
// 	printf('Datainvalida');
// if (m < 1)
// 	printf('Datainvalida');
// if (m > 12)
// 	printf('Datainvalida');
// if (mes == 2)
// {
// 	if (dia > 28)
// 		printf('Datainvalida');
// }
// if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
// {
// 	if (dia > 30)
// 		printf('Datainvalida');
// }
// if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
// {
// 	if (dia > 31)
// 		printf('Datainvalida');
// }
int main(void)
{
	int x = 11;
	// trecho 1
	if (x > 0 && x < 13)
		printf("IntervaloCorreto\n");
	// trecho 2
	char D = 'F';
	if (D == 'F' && D == 'M')
		printf("Drepresentaumgenro\n");
	// trecho 3
	if ((x % 2) == 0)
		printf("xepar\n");
	else
		printf("xeimpar\n");
	// trecho 4
	int ano = 2;
	int m = 4;
	int dia = 28;
	if (ano < 0 || m < 1 || m > 12 || (m == 2 && (dia > 28)) ||
		((m == 4 || m == 6 || m == 9 || m == 11) && dia > 30) ||
		((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && dia > 31))
		printf("Datainvalida");
	return 0;
}