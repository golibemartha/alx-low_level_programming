#include <stdio.h>
/**
 * main - entry point
 * Description: prints fizz for multiples of 3
 * buzz for multiples of 5
 * and fizz buzz for both 3&5 multiples
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 100)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 0)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
