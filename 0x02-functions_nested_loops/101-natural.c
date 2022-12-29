#include <stdio.h>

/**
 * main - Prints the sum of 3 or 5 up to 1024
 * Return: Always 0
 */

int main(void)

{
	int n;
	int m = 0;

	while (n < 1024)
	{
	if ((n % 3 == 0) || (n % 5 == 0))
	{
	m += n;
	}
	n++;
	}
	printf("%d\n", m);
	return (0);
}
