#include "main.h"
/**
 * *_strcpy - a function that copies a pointed string
 * @dest: char type string
 * @src: char type string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

