#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description - to find out if a
 * random number os greater than 5
 * equal to 0 or less than 6
 * Return: 0
 */
int main(void)
{
	int n;
	int random;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	random = n % 10;

	if (n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, random);
	else if (random == 0)
		printf("Last digit of %i is %i and is 0\n", n, random);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, random);
	return (0);
}
