#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int num = 0, num2 = 0;

	printf("digite um numero: ");
	scanf("%i", &num);

	printf("digite um numero: ");
	scanf("%i", &num2);
	
	printf("%i < %i\n", num < num2 ? num : num2, num > num2 ? num : num2);
}