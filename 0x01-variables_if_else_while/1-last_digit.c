#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always Return 0
 *
 */

int main(void)

{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("last digit of %d is greater than 5\n", n, lastn);
	} else if (last == 0)
	{
		printf("last digit of %d is 0\n", n, lastn);
	} else
	{
		printf("last digit of %d is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
