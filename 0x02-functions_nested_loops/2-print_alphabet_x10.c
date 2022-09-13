#include "main.h"
/**
 * main - entry point
 * Description - print 10* the alphabet
 * in lowercase
 * return: 0
 */
void print_alphabet_x10(void);
{
	char i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 'a';
		while (i < 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
