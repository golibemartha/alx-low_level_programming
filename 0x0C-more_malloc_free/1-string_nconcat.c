#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates bytes of a string
  * @s1: string
  * @s2: string
  * @n: no of concatenates
  * Return: pointer to the resulting string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, e = 0, l = 0;

	while (s1 && s1[e])
		e++;
	while (s2 && s2[l])
		l++;
	if (n < l)
		s = malloc(sizeof(char) * (e + n + 1));
	else
		s = malloc(sizeof(char) * (e + l + 1));
	if (!s)
		return (NULL);

	while (i < e)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < l && i < (e + n))
		s[i++] = s2[j++];
	while (n >= l && i < (e + l))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
