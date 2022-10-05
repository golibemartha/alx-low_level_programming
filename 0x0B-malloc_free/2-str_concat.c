#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatenates two strings using malloc
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int i, j, e, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	n = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (n == NULL)
		return (NULL);
	for (e = 0, b = 0; e < (i + j + 1); e++)
	{
		if (e < i)
			n[e] = s1[e];
		else
			n[e] = s2[b++];
	}
	return (n);
}
