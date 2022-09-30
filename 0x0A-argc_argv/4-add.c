#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds to positive numbers
  * @argc: argument count
  * @argv: argument array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int t, i;
	char *p;
	int n;

	t = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (!*p)
				t += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", t);
	return (0);
}
