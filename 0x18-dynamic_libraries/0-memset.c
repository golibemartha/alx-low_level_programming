#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: buffer array
  * @b: constant byte
  * @n: number of areas to fill
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
