#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, n;

	while (i < 50)
	{
		n = a + b;
		a = b;
		b = n;
		printf("%lu", n);
		if (i < 49)
		{
			printf(",");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
