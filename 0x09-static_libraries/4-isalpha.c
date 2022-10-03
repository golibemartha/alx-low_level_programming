#include "main.h"

/**
 * _isalpha - The character ia alphabetic
 * @c: the character to be tested
 * Return: 1 if c ia an alphabet else return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
