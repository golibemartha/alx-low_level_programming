#include "main.h"
/**
  * rot13 - encodes a string
  * @b: the string
  * Return: b
  */
char *rot13(char *b)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (b[i] == a[j])
			{
				b[i] = c[j];
				break;
			}
		}
	}
	return (b);
}
