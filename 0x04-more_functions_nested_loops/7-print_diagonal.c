#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times '\' is printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int c, s;

	c = 0;

	while (n > 0)
	{
		s = c;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
