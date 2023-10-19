#include <stdio.h>

int main(void)
{
	int post1 = 0, post2 = 0, tmp;

	for (int i = 0; i < 20; i++)
	{
		if (i == 0)
		{
			printf("1 ");
			post1 = 1;
		}
		else
		{
			printf("%i ", post1 + post2);
			tmp = post1;
			post1 = post1 + post2;
			post2 = tmp;
		}
	}
	printf("\n");
}