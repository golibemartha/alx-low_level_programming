#include "main.h"

/**
 * print_sign - prototype that prints the signof a number
 * @n: the number to be tested
 * Return: if n>0 return 1 else if n=0 return 0 else return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
