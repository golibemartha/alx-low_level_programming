#include "main.h"

/**
 * more_numbers - print 10 times numbers 0 to 14
 * use _putchar 3 times only
 * Return: 0
 */

void more_numbers(void)
{
	int c, s;

	c = 0;
	while (c < 10)
	{
		s = 0;
		while (s < 15)
		{
			if (s > 9)
				_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			s++;
		}
		c++;
		_putchar('\n');
	}
}
