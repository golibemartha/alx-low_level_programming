#include "main.h"
#include <stdlib.h>
/**
  * _strdup - Duplicate a string using malloc
  * @str: string
  * Return: duplocated string
  */
char *_strdup(char *str)
{
	char *n;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	n = malloc(i * sizeof(*n) + 1);
	if (n == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		n[j] = str[j];
	n[j] = '\0';
	return (n);
}
