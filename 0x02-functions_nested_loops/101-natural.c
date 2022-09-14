#include <stdio.h>

/**
 * main - entry point
 * Description: print and compute the sum of multiples
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (b = 0; b < 1024; ++b)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
			a += b;
	}
	printf("%d\n", a);
	return (0);
}
