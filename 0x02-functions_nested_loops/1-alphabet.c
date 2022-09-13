#include "main.h"
/**
 * main - entry point
 * Description - print alphabet in lowercase
 * using _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
