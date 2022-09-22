#include "main.h"
/**
  * leet - encodes a string into 1337
  * @b: the string
  * Return: b
  */
char *leet(char *b)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *A = "4433007711";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (b[i] == a[j])
			{
				b[i] = A[j];
			}
		}
	}
	return (b);
}
