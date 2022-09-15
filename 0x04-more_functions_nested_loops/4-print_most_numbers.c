#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * only use _putchar twice
 * Return: 0
 */

void print_most_numbers(void)
{
	int s;

	s = 0;
	while (s < 10)
	{
		if (s != 2 && s != 4)
			_putchar(s + '0');
		s++;
	}
	_putchar('\n');
}
