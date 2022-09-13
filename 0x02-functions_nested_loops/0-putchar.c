#include "main.h"
/**
 * main - entry point
 * Description - print _putchar
 * Return: 0
 */
int main(void)
{
	int i = 1;
	char name[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
