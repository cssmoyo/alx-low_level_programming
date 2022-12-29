#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Reurn: None!
 */

int main(void)

{
	int n = 0;
	long m = 1;
	long o = 2;

	while (n < 50)
	{
	if (n == 0)
	printf("%ld", m);
	else if (n == 1)
	printf(", %ld", o);
	else
	{
	o += m;
	m = o - m;
	printf(", %ld", o);
	}
	++n;
	}
	printf("\n");

	return (0);
}
