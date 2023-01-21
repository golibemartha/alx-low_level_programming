#include "main.h"
/**
  * _strspn - gets the lenght of a prefix substring
  * @s: array string
  * @accept: array to check bytes with
  * Return: number of bytes in segment s
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int m;

	i = 0;
	m = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (m);
}
