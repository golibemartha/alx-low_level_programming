#include "main.h"

/**
 * _abs - function that computes the absolite value of an integer
 * @b: the number to be tested
 * Return: (abs (b))
 */
int _abs(int b)
{
	if (b < 0)
	{
		b = b * -1;
	}
	return (b);
}
