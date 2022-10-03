#include "main.h"
/**
  * _strpbrk - searches a string for any set of bytes
  * @s: string
  * @accept: string to match
  * Return: the first occurence of accept in sor NULL if character not found
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *m;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				m = &s[i];
				return (m);
			}
			j++;
		}
		i++;
	}
	return (0);
}
