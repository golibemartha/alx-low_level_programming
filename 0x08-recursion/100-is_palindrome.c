#include "main.h"
/**
  * indes - returns the last index of string
  * @s: string
  * Return: int
  */
int indes(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += indes(s + 1) + 1;
	return (n);
}

/**
  * is_palindrome - check if a string is a palindrome
  * @s: string
  * Return: 0 or 1
  */
int is_palindrome(char *s)
{
	int e = indes(s);

	return (check_it(s, 0, e - 1, e % 2));
}

/**
  * check_it - checker for palindrome in a string
  * @s: string
  * @a: int
  * @e: int
  * @p: int
  * Return: 0 or 1
  */
int check_it(char *s, int a, int e, int p)
{
	if ((a == e && p != 0) || (a == e + 1 && p == 0))
		return (0);
	else
		return (check_it(s, a + 1, e - 1, p));
}
