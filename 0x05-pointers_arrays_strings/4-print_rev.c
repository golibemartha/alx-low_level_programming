#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int i, j, l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;
	j = l - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
