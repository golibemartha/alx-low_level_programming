#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of two diagonals
  * @a: 2d array
  * @size: size of array
  */
void print_diagsums(int *a, int size)
{
	int i, u, s;

	i = 0;
	u = 0;
	s = size * size;
	while (i < s)
	{
		if (i % (size + 1) == 0)
			u += a[i];
		i++;
	}
	printf("%d, ", u);

	u = 0;
	i = 0;
	while (i < s)
	{
		if (i % (size - 1) == 0 && i != (s - 1) && i != 0)
			u += a[i];
		i++;
	}
	printf("%d\n", u);
}
