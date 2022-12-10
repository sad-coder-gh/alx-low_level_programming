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
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
	{
		printf("%d and is greater than 5\n", num);
	} else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6and no 0\n", num);
	} else
	{
		printf("%d is 0\n", num);
	}
	return (0);
}
