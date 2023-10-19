#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int isUpper(char c)
{
	if (c > 64 && c < 91)
	{
		return 1;
	}
	return 0;
}

int isNumber(char c)
{
	if (c > 47 && c < 58)
	{
		return 1;
	}
	return 0;
}

int main()
{
	if (isUpper('Z') && isUpper('A'))
		printf("true\n");
	else
		printf("false\n");
	if (isNumber('0') && isNumber('9'))
		printf("true\n");
	else
		printf("false\n");
}