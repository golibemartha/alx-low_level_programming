#include "main.h"
#include <stdio.h>
/**
  * is_prime_number - check if n is a prime number
  * @n: int
  * Return: 0 or 1
  */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
  * prime - check all numbers < n if they can divide it
  * @n: integer
  * @r: integer
  * Return: integer
  */
int prime(int n, int r)
{
	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n <= 1)
		return (0);
	else
		return (prime(n, r + 1));
}
