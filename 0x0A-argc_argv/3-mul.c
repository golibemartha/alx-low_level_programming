#include <stdlib.h>
#include <stdio.h>
/**
  * main - multiplies two arguments
  * @argc: argument count
  * @argv: argument array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
