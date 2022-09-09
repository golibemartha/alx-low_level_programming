#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - printing alphabets in
 * lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');

	alphabet = 'A';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'Z');
	putchar('\n');
	return (0);
}
