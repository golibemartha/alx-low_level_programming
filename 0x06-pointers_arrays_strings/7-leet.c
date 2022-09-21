#include "main.h"
/**
  * leet - encodes a string into 1337
  * @b: the string
  * Return: b
  */
char *leet(char *b)
{
	int i, j;
	char a[] = "aeotl";
	char A[] = "AEOTL";
	char n[] = "43071";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (b[i] == a[j] || b[j] == A[j])
			{
				b[i] = n[j];
				break;
			}
		}
	}
	return (b);
}
