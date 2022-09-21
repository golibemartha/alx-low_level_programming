#include "main.h"
/**
  * cap_string - capitalizes all words of a string
  * @b: the string
  * Return: b
  */
char *cap_string(char *b)
{
	char s[] = ",\t;\n; .!?\"(){}";
	int f, i, j;

	for (i = 0; b[i] != '\0'; i++)
	{
		f = 0;

		if (i == 0)
		{
			f = 1;
		}
		else
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (b[i - 1] == s[j])
				{
					f = 1;
					break;
				}
			}
		}
		if (f == 1)
		{
			if (b[i] <= 'z' && b[i] >= 'a')
			{
				b[i] -= ('a' - 'A');
			}
		}
	}
	return (b);
}
