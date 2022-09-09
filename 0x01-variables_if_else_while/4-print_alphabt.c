#include <stdio.h>
/**
 * main - entry point
 * Description - printing all alphabets
 * except q and e
 * Return: 0
 */
int main(void)
{
	char all = 'a';

	while (all <= 'z')
	{
		if (all != 'e' && all != 'q')
		{
			putchar(all);
		}
		all++;
	}
	putchar('\n');
	return (0);
}
