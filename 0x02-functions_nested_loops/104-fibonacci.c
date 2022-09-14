#include <stdio.h>
/**
 * main - entry point
 * Description: print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, n = 0;

	while (i < 98)
	{
		n = a + b;
		a = b;
		b = n;
		printf("%lu", n);
		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
