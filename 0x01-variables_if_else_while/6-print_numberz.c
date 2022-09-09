#include <stdio.h>
/**
 * main - entry point
 * Description - printing numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
