#include "main.h"

/**
 * _islower - define is a character is lower case or not.
 * @c: character to be tested
 * Return: 1 if lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
