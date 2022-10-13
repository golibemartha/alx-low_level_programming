#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of all its parameters
  * @n: number
  * Return: total sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int s;

	va_start(list, n);
	for (i = 0, s = 0; i < n; i++)
		s += va_arg(list, int);

	va_end(list);

	return (s);
}
