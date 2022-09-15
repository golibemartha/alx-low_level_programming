#include "main.h"

/**
 * print_numbers - prints 0 - 9
 * using putchar twice
 * Return: 0
 */

void print_numbers(void)
{
	int s = 0;

	do {
		_putchar(s + 48);
		s++;
	} while (s >= 0 && s <= 9);
	_putchar ('\n');
}
