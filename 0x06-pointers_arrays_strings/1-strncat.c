#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: first char
  * @src: second char
  * @n: number of elements to concatenate
  * Return: string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
		i++;

	c = 0;
	while (src[c] != '\0' && n > 0)
	{
		dest[i] = src[c];
		c++;
		n--;
		i++;
	}
	return (dest);
}
