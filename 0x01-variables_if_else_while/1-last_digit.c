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
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (n > 5)
	{
		printf("%d is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("%d is 0\n", n, a);
	}
	else
	{
		printf"%d is less than 6 and not 0\n", n, a);
	}
	return (0);
}
