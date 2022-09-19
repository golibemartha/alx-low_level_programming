#include "main.h"
/**
 * puts2 - prints everyother character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	i = 0;

	while (i < l)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

