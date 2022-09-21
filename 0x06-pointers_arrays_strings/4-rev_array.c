#include "main.h"
/**
  * reverse_array - reverses the content of aninteger array
  * @a: the array
  * @n: number of array elements
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int i, j, t;

	j = n - 1;
	i = 0;

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;
		i++;
	}
}
