#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - printing numbers from 0 - 10
 * Return: 0
 */
int main(void)
{
	char num = '0';

	do {
		putchar(num);
		num++;
	} while (num <= '9');
	putchar('\n');
	return (0);
}
