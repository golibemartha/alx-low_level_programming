#include "main.h"

/**
 * print_line - draw a stright line
 * @n: number of times '_' is printed
 * Return: 0
 */
void print_line(int n)
{
	int s;

	s = 0;
	while (s < n)
	{
		_putchar('_');
		s++;
	}
	_putchar('\n');
}
