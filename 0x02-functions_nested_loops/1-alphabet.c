#include "main.h"

/**
 * main - entry point
 * Description - print alphabet in lowercase
 * using _putchar with function void print_alphabet
 * It prints the alphabet in lowercase fallowed by a new line
 * Return: 0
 */
void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
