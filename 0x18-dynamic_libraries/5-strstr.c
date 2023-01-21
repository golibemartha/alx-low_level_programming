#include "main.h"
#include <stdlib.h>
/**
  * _strstr - locates a substring
  * @haystack: string
  * @needle: string substring
  * Return: pointer to beginning of substring or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, m;

	i = 0;
	m = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + m] != '\0' && haystack[i + m] != '\0'
				&& needle[j + m] == haystack[i + m])
		{
			if (haystack[i + m] != needle[j + m])
				break;
			m++;
		}
		if (needle[j + m] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}
	return (NULL);
}
