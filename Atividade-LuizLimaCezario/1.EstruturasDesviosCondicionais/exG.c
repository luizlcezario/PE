#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Fa¸ca um programa que leia o nome (string), sexo (char) e idade (int) de uma pessoa. Se o sexo
for feminino e a idade menor que 25, seu programa deve imprimir o nome da pessoa e a palavra
ACEITA. Caso contr´ario deve imprimir NAO ACEITA.
 *
 */

int main(void)
{
	int idade = 0;
	char s[2];
	char nome[100];

	printf("programa de recrutamento!\n");
	printf("digite seu nome: ");
	scanf("%s", nome);
	printf("digite sua idade: ");
	scanf("%i", &idade);
	printf("digite se é homen(M) ou mulher(F): ");
	scanf("%s", s);
	if (*s == 'F' && idade < 25)
	{
		printf("ACEITA\n");
	}
	else
	{
		printf("NAO ACEITA\n");
	}
	return 0;
}