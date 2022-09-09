#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - printing alphabets in reverse * Return: 0
 */
int main(void)
{
	char rev = 'z';

	do {
		putchar(rev);
		rev--;
	} while (rev >= 'a');
	putchar('\n');
	return (0);
}
