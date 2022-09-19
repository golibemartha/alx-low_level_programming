#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
	char t;
	int i, l, m;

	l = 0;
	m = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	m = l - 1;
	i = 0;

	while (i < l / 2)
	{
		t = s[i];
		s[i] = s[m];
		s[m--] = t;
		i++;
	}
}
