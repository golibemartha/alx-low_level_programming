#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @b: number to be used
 * Return: the last digit of a number
 */
int print_last_digit(int b)
{
	b = b % 10;

	if (b < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
