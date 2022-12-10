#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- print variable n(postitive ,is zero or negative)
 *Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		pintf("%d positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is zero\n", n);
	else
	{
		printf("%d negative\n", n);
	}

	return (0);
}
