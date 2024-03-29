#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function will print lowercase latters then a new line
 * Return:0(success)
 */

int main(void)
{
	int n, lstdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdigit = n % 10;

	if (lstdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdigit);
	}
	else if (lstdigit < 6 && lstdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdigit);
	}
	return (0);

}
