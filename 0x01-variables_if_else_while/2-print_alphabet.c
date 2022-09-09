#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - printing the alphabets
 * in lowercase
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');
	return (0);
}
