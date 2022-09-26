#include "main.h"
/**
  * _strchr - locates a character in a string
  * @s: array string
  * @c: character to look for
  * Return: a pointer to the first occurance of c in s or NULL if not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
