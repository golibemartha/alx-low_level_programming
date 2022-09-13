#include "main.h"

/**
 * print_alphabet_x10 - print alphabet [a..z]
 * in lowercase
 * return: always void
 */
/* the function is of type void */
void print_alphabet_x10(void)
{
	char i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
