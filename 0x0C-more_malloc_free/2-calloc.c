#include "main.h"
/**
  * _calloc - allocates memory for an array
  * @nmemb: no of elements
  * @size: size of elements
  * Return: Null if error, else pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int j;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < nmemb; j++)
		p[j] = 0;

	return (p);
}
