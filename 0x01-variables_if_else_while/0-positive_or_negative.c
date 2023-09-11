#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this fuction deteremines whether n is negative and positive
 * Return: 0(success)
 */

int main(void)
{
	int n;

	srand(time((0));
	n = rand() - RAND_MAX /2;
	if(n > 0)
	{
	    printf("%d is a positive\n", n);
	}
	else if (n == 0)
	{
	    printf("%d is a zero\n", n);
	}
	else
	{
	    printf("%d is a negative\n", n);
	}
	return (0);
}
