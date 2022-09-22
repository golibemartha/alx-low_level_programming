#include "main.h"

/**
  * _strcat - function to concantenate two strings
  * @dest: first char
  * @src: second char
  * Return: string dest
  */
char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
		i++;

	c = 0;

	while (src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

