#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - creayes a 2d array of integers with malloc
  * @width: integer
  * @height: integer
  * Return: Pointer to the created array else null
  */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			free(a);
			for (j = 0; j <= i; j++)
				free(a[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
