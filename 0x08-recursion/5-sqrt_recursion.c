#include "main.h"
/**
  * _sqrt_recursion - returns the natural square of a number
  * @n: number
  * Return: the natural square
  */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
  * halp - helper function to solve _sqrt_recursions
  * @c: number to determine if squre root
  * @i: increment to compar against c
  * Return: squre root of natural squre root else -1
  */
int halp(int c, int i)
{
	int s;

	s = i * i;
	if (s == c)
		return (i);
	else if (s < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
