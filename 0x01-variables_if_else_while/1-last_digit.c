#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function will print lowercase latters then a new line
 * Return:0(success)
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d and %d  is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit is %d and %d  is less than 6 and not 0\n", n, lastdigit);
	}
	else
	{
		printf("Last digit of %d and %d is 0\n", n, lastdigit);
	}
	return (0);

}
