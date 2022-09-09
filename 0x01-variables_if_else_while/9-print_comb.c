#include <stdio.h>
/**
 * main - entry point
 * Description - printing all possible
 * combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int g = 0;

	while (g < 10)
	{
		putchar(g + '0');
		if (g < 9)
		{
			putchar(44);
			putchar(32);
		}
		g++;
	}
	putchar('\n');
	return (0);
}
