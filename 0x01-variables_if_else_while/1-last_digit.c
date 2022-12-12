#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main -Point of Entry
 *Return: Always 0
 */

int main(void)
{
	int n;
	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;

	if (c > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, c);
	}
	else if (c < 6 && c != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, c);
	}
	return (0);
}
